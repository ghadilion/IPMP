// Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements. 

// Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

//     a, b are from arr
//     a < b
//     b - a equals to the minimum absolute difference of any two elements in arr


#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> sol;
        sort(arr.begin(), arr.end());
        int min = arr[1] - arr[0];
        for(int i = 1; i < arr.size() - 1; ++i)
            if(arr[i+1] - arr[i] < min)
                min = arr[i+1] - arr[i];
        for(int i = 0; i < arr.size() - 1; ++i)
            if(arr[i+1] - arr[i] == min)
                sol.push_back(vector<int>{arr[i], arr[i+1]});
        return sol;
    }
};