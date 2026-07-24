class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i<nums.size() ; i++){
            int first = nums[i];
            for (int j = i+1; j<nums.size(); j++){
                 int second = nums[j];
                  int sum = first + second;
                  if(sum == target){
                    return {i,j};
                  }
                  
            }
        }
        return {};
    }
};
