class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        for(size_t i = 0; i < operations.size(); ++i){
           if(operations[i] == "++X" || operations[i] == "X++"){
               value++;
           }else{
               value--;
           }
        }
        return value;
    }
};