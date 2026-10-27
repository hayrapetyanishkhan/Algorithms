#include "Headers.hpp"

void MergeSort(std::vector<int>& nums, int start, int end)
{
    if(start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    MergeSort(nums, start ,mid);
    MergeSort(nums, mid + 1, end);
    Merge(nums, start, mid, end);
}

void Merge(std::vector<int>& nums, int start, int mid, int end)
{
    int s1 = start;
    int e1 = mid;
    int s2 = mid + 1;
    int e2 = end;
    std::vector<int> tmp(end - start + 1, 0);
    int k{};
    while(s1 <= e1 && s2 <= e2) {
        if(nums[s1] <= nums[s2]) {
            tmp[k++] = nums[s1++];
        }
        else {
            tmp[k++] = nums[s2++];
        }
    }
    while(s1 <= e1) {
        tmp[k++] = nums[s1++];
    }
    while(s2 <= e2) {
        tmp[k++] = nums[s2++];
    }
    k = 0;
    for(int i = start ; i <= end ; ++i) {
        nums[i] = tmp[k++];
    }
}