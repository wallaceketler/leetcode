class Solution {
  List<int> twoSum(List<int> nums, int target) {
      List<int> output = [];
      for(int i = 0; i < nums.length; ++i){
          for(int j = 1; j < nums.length; ++j){
              if(nums[i] + nums[j] == target && i!=j){
                  output.add(i);
                  output.add(j);
                  return output;
              }
          }
      }      
    return [];
  }
}