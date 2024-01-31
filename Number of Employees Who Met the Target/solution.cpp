class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int total = 0;
        for(size_t i = 0; i < hours.size(); ++i){
           if(hours[i]>=target){
            total++;
           }
        }
        return total;
    }
};