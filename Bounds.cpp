#include "Headers.hpp"

int LowerBound(const std::vector<int>& nums, int target)
{
    int start{};
    int end = nums.size();
    int mid;
    while(start < end)
    {
        mid = start + (end - start) / 2;
        if(nums[mid] >= target) {
            end = mid;
        }
        else {
            start = mid + 1;
        }
    }
    return start;
}

int UpperBound(const std::vector<int>& nums, int target)
{
    int start{};
    int end = nums.size();
    int mid;
    while(start < end) {
        mid = start + (end - start) / 2;
        if(nums[mid] > target) {
            end = mid;
        }
        else {
            start = mid + 1;
        }
    }
    return start;
}