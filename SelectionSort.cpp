#include "Headers.hpp"

void SelectionSort(std::vector<int>& nums)
{
    for(int i = 0 ; i < nums.size() - 1; ++i)
    {
        int min_index = i;
        for(int j = i + 1 ; j < nums.size() ; ++j)
        {
            if(nums[j] < nums[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            std::swap(nums[i],nums[min_index]);
        }
    }
}