//Find the number of occurrences of an element in a sorted array

#include <bits/stdc++.h>

int count(int *arr, int key, int size) {
    int left = binarySearch(arr, key, size, true), right = binarySearch(arr, key, size, false);
    if(left < 0) return 0;
    return right - left + 1;
}

int binarySearch(int *arr, int key, int size, bool leftmost) {
    int lo = 0, hi = size - 1, idx = -1;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(arr[mid] > key)
            hi = mid - 1;
        else if(arr[mid] < key)
            lo = mid + 1;
        else {
            idx = mid;
            if(leftmost)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return idx;
    }   
}