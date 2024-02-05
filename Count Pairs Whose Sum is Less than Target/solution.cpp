class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = 0;
        for(size_t i = 0; i < nums.size(); ++i){
            for(size_t j = 0; j < nums.size(); ++j){
                if(i >= 0 && i < j && nums.size() > j &&
                  (nums[i] + nums[j]) < target){
                    n++;
                }
            }
        }
        return n;
    }
};