#include <vector>
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int count =0;
        for(int i=1; i<nums.size(); i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};