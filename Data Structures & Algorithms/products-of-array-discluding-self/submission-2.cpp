class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);

        // pass 1: left products
        int left = 1;
        for (int i = 0; i < nums.size(); i++) {
            result[i] = left;
            left *= nums[i];
        }

        // pass 2: right products
        int right = 1;
        for (int i = nums.size()-1; i >= 0; i--) {
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};
