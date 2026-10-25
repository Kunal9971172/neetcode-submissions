class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        
        // Calculate left products and store them in the result array
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            res[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        // Calculate right products on the fly and multiply with the left products
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return res;
    }
};
