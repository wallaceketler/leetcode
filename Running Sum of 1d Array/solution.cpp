class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentSum = 0;
        vector<int> sum;
        for(size_t i = 0; i < nums.size(); ++i){
            sum.emplace_back(nums[i] + currentSum);
            currentSum+=nums[i];
        }
        return sum;
    }
};