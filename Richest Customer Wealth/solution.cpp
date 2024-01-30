class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max;
        int current;
        for(size_t i = 0; i < accounts.size(); ++i){
            current = 0;
            for(size_t j = 0; j < accounts[i].size(); ++j){
                current += accounts[i][j];
            }
            if(current > max)
                max = current;
        }
        return max;
    }
};