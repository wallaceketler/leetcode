class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans = nums;
        for(size_t i = 0; i < nums.size(); ++i){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};