#include "Headers.hpp"

int BinarySearch(const std::vector<int>& nums,int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(nums[mid] == target)
        {
            return mid;
        }
        if(nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int RecursiveBS(const std::vector<int>& nums,int start,int end,int target)
{
    if(start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if(nums[mid] == target)
    {
        return mid;
    }
    if(nums[mid] > target)
    {
        return RecursiveBS(nums,start,mid - 1,target);
    }
    else
    {
        return RecursiveBS(nums,mid + 1,end,target);
    }
}