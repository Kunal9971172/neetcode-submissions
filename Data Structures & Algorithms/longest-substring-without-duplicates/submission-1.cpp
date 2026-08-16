class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int high = 0;
        int res = 0;
        int n = s.size();
        unordered_map<char, int>freq;

        for(high = 0;high<n;high++){
            freq[s[high]]++;

            while(freq.size()<(high-low+1)){//Rejecting Condition For Maximum(Longest) 
                freq[s[low]]--;
                if(freq[s[low]]==0){
                    freq.erase(s[low]);
                }
                low++;
            }
            res = max(res,(high-low+1));
        }
        return res ;
            
    }
    
};
