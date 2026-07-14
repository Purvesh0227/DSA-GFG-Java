class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(string word : arr){
            string key = word;
            sort(key.begin(),key.end());
            mp[key].push_back(word);
        }
        
        for(auto &t : mp){
            ans.push_back(t.second);
        }
        return ans;
        
    }
};