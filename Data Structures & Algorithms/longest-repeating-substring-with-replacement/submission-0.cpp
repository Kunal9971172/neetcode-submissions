class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int n = s.size();
        int maxFreq = 0;
        int res = 0;
        unordered_map<char,int> freq;

        for(high = 0; high<n ; high++){
            freq[s[high]]++;
            maxFreq = max(maxFreq,freq[s[high]]);
            
            while((high-low+1)-maxFreq>k){
                freq[s[low]]--;
                low++;
            }
            res = max(res,(high-low+1));
        }
        return res;
    }
};
