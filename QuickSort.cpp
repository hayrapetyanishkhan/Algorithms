#include "Headers.hpp"

void QuickSort(std::vector<int>& nums, int start, int end)
{
    if(start >= end) {
        return;
    }
    int index = Partition(nums, start, end);
    QuickSort(nums, start, index - 1);
    QuickSort(nums, index + 1, end);
}

int Partition(std::vector<int>& nums, int left, int right)
{
    int randIdx = (rand() % (right - left + 1)) + left;
    std::swap(nums[right], nums[randIdx]);
    int target = nums[right];
    int i = left;
    int j = right - 1;
    while(i <= j) {
        while(i <= j && nums[i] <= target) {
            ++i;
        }
        while(i <= j && nums[j] > target) {
            --j;
        }
        if(i < j) {
            std::swap(nums[i], nums[j]);
        }
    }
    std::swap(nums[i], nums[right]);
    return i;
}