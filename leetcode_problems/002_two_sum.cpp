#include <iostream>
#include <vector>

using vector = std::vector<int>;

class Solution {
public:
    vector twoSum(vector<int>& nums, int target) {
        // naive solution (n^2)
        int len = nums.size()

        for (int i = 0; i < len; ++i) {
            for (int j = i+1; j < len; ++j) {
                if (nums[i] + nums[j] == target) {
                    vector inds = {i, j};
                    return inds;
                }   
            }
        }
    }
};