class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int how_many = 0 ;
        for(size_t i = 0; i < stones.size(); ++i){
            for(size_t j = 0; j < jewels.size(); ++j){
                if(stones[i] == jewels[j]){
                    how_many++;
                }
            }
        }
        return how_many;
    }
};