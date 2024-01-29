class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int max = 0;
        bool error = false;
        for(size_t i = 0; i < points.size(); ++i){
            for(size_t j = 0; j < points.size(); ++j){
                if(fabs(points[i][0] - points[j][0]) > max){
                    if(points[i][0] < points[j][0]){
                        for(size_t k = 0; k < points.size(); ++k){
                            if(points[k][0] > points[i][0] && points[k][0] < points[j][0]){
                                error = true;
                            }
                        }
                        if(!error){
                            max = fabs(points[i][0] - points[j][0]);
                        }
                    }
                }
            }
        }
        return max;
    }
};