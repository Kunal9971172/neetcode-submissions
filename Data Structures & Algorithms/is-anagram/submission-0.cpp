class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> m1;
        unordered_map <char, int> m2;

        for(int i : s){
            m1[i] ++;
        }
         for(int j : t){
            m2[j] ++;
        }
        if( m1 == m2){
            return true;
        }
        return false;
    }
};
