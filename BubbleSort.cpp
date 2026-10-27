#include "Headers.hpp"

void BubbleSort(std::vector<int>& nums)
{
    for(int i{}; i < nums.size() - 1; ++i) {
        bool swapped = false;
        for(int j{}; j < nums.size() - i - 1; ++j) {
            if(nums[j] > nums[j + 1]) {
                std::swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }
}