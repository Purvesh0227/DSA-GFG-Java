class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> count;
        for(int x:arr) count[x]++;
        for(auto& [num,c] : count){
            if(c>arr.size()/2) return num;
        }
        return -1;
    }
};