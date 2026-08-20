class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int res =2 ;
        int j = 2;
        while(j<nums.size()){
            if(nums[j] == nums[i] && nums[j] == nums[i-1]){
                j++;
                continue;
            }
            nums[i+1] = nums[j];
            i++;
            res++;
            j++;
        }
        return res;
    }
};