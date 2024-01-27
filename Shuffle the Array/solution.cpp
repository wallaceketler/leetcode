class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> part1;
        vector<int> part2;
        vector<int> full;
        for(size_t i = 0; i < 2*n; ++i){
            if(i < n){
                part1.emplace_back(nums[i]);
            }else{
                part2.emplace_back(nums[i]);
            }
        }
        for(size_t i = 0; i < n; ++i){
            full.emplace_back(part1[i]);
            full.emplace_back(part2[i]);
        }
        return full;
    }
};