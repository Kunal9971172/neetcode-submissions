#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {
            // Check if it's the start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 1;

                // Count consecutive numbers
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }

                longest = std::max(longest, length);
            }
        }

        return longest;
    }
};