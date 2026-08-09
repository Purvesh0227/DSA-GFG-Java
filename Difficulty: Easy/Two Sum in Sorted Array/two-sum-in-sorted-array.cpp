class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            int sum = arr[left]+arr[right];
            if(sum == target){
                return {left+1,right+1};
            }
            if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }
        return {-1,-1};
    }
};