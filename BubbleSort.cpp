#include "Headers.hpp"

void BubbleSort(std::vector<int>& nums)
{
    for(int i = 0 ; i < nums.size() - 1 ; ++i)
    {
        bool swapped = false;
        for(int j = 0 ; j < nums.size() - i - 1 ; ++j)
        {
            if(nums[j] > nums[j + 1])
            {
                std::swap(nums[j],nums[j + 1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}