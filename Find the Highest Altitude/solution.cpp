class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int current = 0;
        for(size_t i = 0; i < gain.size(); ++i){
            current = current + gain[i];
            if(current > highest) { highest = current; }
        }
        return highest;
    }
};