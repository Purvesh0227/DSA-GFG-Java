class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int len = arr.size();
        long long n = len + 1;  // use long long to avoid overflow
        
        long long sum = (n * (n + 1)) / 2;
        long long sum2 = 0;
        for (int i : arr) {
            sum2 += i;
        }
        return (int)(sum - sum2);
    }
};