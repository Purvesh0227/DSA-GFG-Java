class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int left = 0;
        int n = s.size();
        int right = n-1;
        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};