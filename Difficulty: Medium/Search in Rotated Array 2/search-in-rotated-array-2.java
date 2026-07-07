class Solution {
    public boolean search(int[] a, int t) {
        // code here
        int n = a.length;
        int low = 0,high =n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid] == t) return true;

            if(a[mid] == a[low] && a[mid] == a[high]){
                high--;
                low++;
                continue;
            }

            if(a[low] <= a[mid]){
                if(a[low] <= t && t < a[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(a[mid] < t && t <= a[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }


        }
        return false;
    }
}
