class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smallers;
        for(size_t i = 0; i < nums.size(); ++i){
            smallers.emplace_back(0);
        }
        for(size_t i = 0; i < nums.size(); ++i){
            for(size_t j = 0 ; j < nums.size(); ++j){
                if(i != j && nums[j] < nums[i]){
                    smallers[i]++;
                }
            }
        }
        return smallers;
    }
};