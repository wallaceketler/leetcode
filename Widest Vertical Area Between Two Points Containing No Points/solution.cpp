class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int max = 0;
        vector<int> xPos;
        for(size_t i = 0; i < points.size(); ++i){
            xPos.push_back(points[i][0]);
        }
        sort(xPos.begin(), xPos.end());
        for(size_t i = 1; i < xPos.size(); ++i){
            if(fabs(xPos[i] - xPos[i-1]) > max){
               max = fabs(xPos[i] - xPos[i - 1]); 
            }
        }
        return max;
    }
};