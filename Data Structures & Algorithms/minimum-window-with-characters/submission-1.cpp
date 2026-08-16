class Solution {
public:
    string minWindow(string s, string t) {
        int low = 0;
        int high = 0;
        int have = 0;
        int required = t.size();
        int start = 0;
        int res = INT_MAX;
        unordered_map<char,int>need;
        unordered_map<char,int>window;

        for(char ch:t){
            need[ch]++;
        }
        for(high = 0; high<s.size(); high++){
            window[s[high]]++;
            if(need.count(s[high]) && window[s[high]]<=need[s[high]]){
                have++;
            }
            while(have == required){
                if((high-low+1)<res){
                    res = high - low + 1;
                    start = low;       // Start with required cha Low
                }
            window[s[low]]--;
            if(need.count(s[low]) && window[s[low]] < need[s[low]]){
                have--;
            }
            low++;
         }
       }
       if(res == INT_MAX){
        return "";
       }
       return s.substr(start,res);

    }
};
