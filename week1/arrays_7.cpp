// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

// The replacement must be in place and use only constant extra memory.

#include <bits/stdc++.h>

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int last = nums.size() - 2;
        int s = nums.size() - 1;
        while((last + 1) && nums[last + 1] <= nums[last])
            last--;
        while((last + 1) && nums[s] <= nums[last])
            s--;
        if(last + 1) {
            int temp = nums[last];
            nums[last] = nums[s];
            nums[s] = temp;
        }
        reverse(nums.begin() + last + 1, nums.end());
    }
};