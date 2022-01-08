// Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3)
            return false;
        int i, j;
        i = j = INT_MAX;
        for(int in = 0; in < nums.size(); ++in) {
            if(nums[in] <= i)
                i = nums[in];
            else if(nums[in] <= j)
                j = nums[in];
            else
                return true;
        }
        return false;
    }
};