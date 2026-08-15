class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()){
            return false;
        }
        unordered_map<char,int> freq;
        for(char ch:s1){
            freq[ch]++;
        }
        for(char ch:s2){
            freq[ch]--;
        }
        for(auto& [c,count]:freq){
            if(count!=0){
                return false;
            }
            
        }
        return true;
    }
};