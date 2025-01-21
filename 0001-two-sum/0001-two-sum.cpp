#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> Nums = nums;
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int num1 = 0, num2 = 0;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) { num1 = nums[left]; num2 = nums[right];break; } 
            else if (sum < target) { ++left;}
            else { --right; }
        }

        int i1 = -1, i2 = -1;
        for (int i = 0; i < Nums.size(); ++i) {
            if (Nums[i] == num1 && i1 == -1) { i1 = i; } 
            else if (Nums[i] == num2 && i2 == -1) {i2 = i;}
        }

    return {i1, i2}; 
    }
};