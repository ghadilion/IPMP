// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include <bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        for(i = 0; i < nums.size() - 1; ++i)
            for(j = i + 1; j < nums.size(); ++j)
                if(nums[i] + nums[j] == target)
                    return vector<int>{i, j};
        return {0};
    }
};