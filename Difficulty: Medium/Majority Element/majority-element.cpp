class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> count;
        for(int x:arr){
            count[x]++;
            if(count[x]>arr.size()/2) return x;
        }
            return -1;
        
     }
};