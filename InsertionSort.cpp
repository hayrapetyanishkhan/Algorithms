#include "Headers.hpp"

void InsertionSort(std::vector<int>& nums)
{
    for(int i = 1; i < nums.size(); ++i) {
        int element = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > element) {
            nums[j + 1] = nums[j];
            ++j;
        }
        nums[j + 1] = element;
    }
}