class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k is greater than or equal to n
        if (k == 0) return;

        vector<int> temp(k);
        
        // 1. Copy the last k elements into temp
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }
        
        // 2. Shift the remaining elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }
        
        // 3. Place the elements from temp back to the front
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};