#include "Headers.hpp"

void UnstableCountingSort(std::vector<int>& nums) {
    int max = *(std::max_element(nums.begin(), nums.end()));
    int min = *(std::min_element(nums.begin(), nums.end()));
    std::vector count(max - min + 1, 0);
    for(int i{}; i < nums.size(); ++i) {
        ++count[nums[i] - min];
    }
    int k{};
    for(int i{}; i < count.size(); ++i) {
        while(count[i]) {
            nums[k++] = i + min;
            --count[i];
        }
    }
}

std::vector<int> CountingSort(std::vector<int>& nums) {
    int max = *(std::max_element(nums.begin(), nums.end()));
    int min = *(std::min_element(nums.begin(), nums.end()));
    std::vector count(max - min + 1, 0);
    for(int i{}; i < nums.size(); ++i) {
        ++count[nums[i] - min];
    }
    for(int i = 1; i < count.size(); ++i) {
        count[i] += count[i - 1];
    }
    std::vector res(nums.size(), 0);
    for(int i = nums.size() - 1; i >= 0; --i) {
        res[--count[nums[i] - min]] = nums[i];
    }
    return res;
}