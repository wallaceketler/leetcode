class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int seconds;
        vector<int> nextPoint = points[1];
        vector<int> currentPoint = points[0];
        vector<vector<int>> moves(8,currentPoint);
        //up, down, left, right, upLeft, upRight, downLeft, downRight;
        vector<int> possibilities(8);
        bool end = false;
        while(!end){
            //up
            moves[0][1] = currentPoint[1] + 1; 
            possibilities[0] = euclidian(moves,nextPoint);
            //down
            moves[1][1] = currentPoint[1] - 1;
            possibilities[1] = euclidian(moves,nextPoint);
            //left
            moves[2][0] = currentPoint[0] - 1;
            possibilities[2] = euclidian(moves,nextPoint);
            //right
            moves[3][0] = currentPoint[0] + 1;
            possibilities[3] = euclidian(moves,nextPoint);
            //upLeft
            moves[4][0] = currentPoint[0] - 1;
            moves[4][1] = currentPoint[1] + 1;
            possibilities[4] = euclidian(moves,nextPoint);
            //upRight
            moves[5][0] = currentPoint[0] + 1;
            moves[5][1] = currentPoint[1] + 1;
            possibilities[5] = euclidian(moves,nextPoint);
            //downLeft
            moves[6][0] = currentPoint[0] - 1;
            moves[6][1] = currentPoint[1] - 1;
            possibilities[6] = euclidian(moves,nextPoint);
            //downRight
            moves[7][0] = currentPoint[0] + 1;
            moves[7][0] = currentPoint[1] - 1;
            possibilities[7] = euclidian(moves,nextPoint);
            for(size_t i = 0; i < 8; ++i){
                
            }
        }
        return seconds;
    }

    int euclidian(vector<int> point1, vector<int> point2){
        int sum = 0;
        int d = 0;
        for(size_t i = 0; i < point1.size(); ++i){
            d = point1[i] - point2[i];
            sum = sum + d*d;
        }
        return sqrt(sum);
    }
};