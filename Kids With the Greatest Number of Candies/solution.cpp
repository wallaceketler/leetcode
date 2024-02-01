class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> isGreatest;
        int theGreatest = 0;
        for(size_t i = 0; i < candies.size(); ++i){
            if(candies[i] > theGreatest){ theGreatest = candies[i]; }
        }
        for(size_t i = 0; i < candies.size(); ++i){
            if(candies[i] + extraCandies >= theGreatest){ 
                isGreatest.emplace_back(true);
            }else{
                isGreatest.emplace_back(false);
            }
        }
        return isGreatest;
    }
};