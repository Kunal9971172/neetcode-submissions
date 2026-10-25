#include <vector>
#include <string>

class Solution {
public:
    // Encodes a list of strings to a single string.
    std::string encode(std::vector<std::string>& strs) {
        std::string res = "";
        for (const std::string& s : strs) {
            res += std::to_string(s.length()) + "#" + s;
        }
        return res;
    }

    // Decodes a single string to a list of strings.
    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> res;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            // Find the delimiter '#'
            while (s[j] != '#') {
                j++;
            }
            // Parse the length of the string
            int length = std::stoi(s.substr(i, j - i));
            // Extract the string using the parsed length
            std::string str = s.substr(j + 1, length);
            res.push_back(str);
            // Move pointer to the next encoded chunk
            i = j + 1 + length;
        }
        return res;
    }
};