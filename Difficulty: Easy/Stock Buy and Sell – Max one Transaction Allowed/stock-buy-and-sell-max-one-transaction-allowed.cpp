class Solution {
  public:
    int maxProfit(vector<int> &arr) {
        // code here
        int profit =0;
        int mini = arr[0];
        for(int i=0;i<arr.size();i++){
            int cost = arr[i]-mini;
            profit = max(profit,cost);
            mini = min(mini,arr[i]);
        }
        return profit;
    }
};
