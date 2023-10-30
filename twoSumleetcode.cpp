class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      int small = 0;
      int big = n-1;
      int sum = nums[small]+nums[big];
      while(small<big) {
      if(sum == target) {
          return {small,big};
      }
      else if (sum > target) 
          big--;
      else 
          small++;
      }
      return {-1,-1};
    }
};
