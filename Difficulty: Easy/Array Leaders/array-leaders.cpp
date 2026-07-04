class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int maxi = INT_MIN;  // handle negative numbers

        for(int i = n - 1; i >= 0; i--) {
            if(arr[i] >= maxi) {   // use >= to include duplicates
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        reverse(ans.begin(), ans.end()); // restore left-to-right order
        return ans;
    }
};
