class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res(n+m);
        int id = 0;
        int i = 0;
        int j = 0;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                res[id] = nums1[i];
                id++;
                i++;
            }
            else{
                res[id] = nums2[j];
                id++;
                j++;
            }

        }
        while(i < m){
            res[id] = nums1[i];
                id++;
                i++;
        }
        while(j < n){
            res[id] = nums2[j];
            id++;
            j++;
        }
        nums1 = res;
    }
};