class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        unordered_map<int,int> m;
        
        
        for(int i=0;i<n;i++){
            int first = arr[i];
            int second = target-first;
            if(m.find(second)!=m.end()){
                return true;
            }
            m[first] = i;
        }
        return false;
    }
};