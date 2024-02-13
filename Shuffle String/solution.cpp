class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffled = "";
        for(size_t i = 0; i < indices.size(); ++i){
            for(size_t j = 0; j < indices.size(); ++j){
                if(i == indices[j]){
                    shuffled+= s[j];
                }      
            }
        }
        return shuffled;
    }
};