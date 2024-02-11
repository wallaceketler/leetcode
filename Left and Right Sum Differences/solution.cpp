class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        vector<int> leftSum;
        vector<int> rightSum;
        int currentLeftSum = 0;
        int currentRightSum = 0;

        for(size_t i = 0; i < nums.size(); ++i){
            answer.emplace_back(0);
            leftSum.emplace_back(0);
            rightSum.emplace_back(0);
        }

        for(size_t i = 0; i < nums.size(); ++i){
            currentLeftSum = 0;
            currentRightSum = 0;
            for(size_t j = 0; j < nums.size(); ++j){
                if(j < i){
                    currentLeftSum+=nums[j];
                    leftSum[i] = currentLeftSum;
                }
                if(j > i){
                    currentRightSum+=nums[j];
                    rightSum[i] = currentRightSum;
                }
            }
        }

        for(size_t i = 0; i < nums.size(); ++i){
            answer[i] = fabs(leftSum[i] - rightSum[i]);
        }
        return answer;
    }
};