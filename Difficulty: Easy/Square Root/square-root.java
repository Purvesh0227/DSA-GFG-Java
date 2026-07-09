class Solution {
    int floorSqrt(int n) {
        // code here
        int low = 0;
        int high = n;
        while(low<=high){
            int mid = (low+high)/2;
            if((long)(mid*mid)<=n){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return high;
    }
}