class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int output = 0;
        for(size_t i = 0; i < nums.size(); ++i){
            for(size_t j = 0; j < nums.size(); ++j){
               if(nums[i] == nums[j] && i < j){
                   output++;
               } 
            }
        }
        return output;
    }
};