class Solution {
    public int peakElement(int[] arr) {
        // code here
        int n = arr.length;
        for(int i=0;i<n;i++){
            boolean l = (i==0) || (arr[i]>arr[i-1]);
            boolean r = (i==n-1) || (arr[i]>arr[i+1]);
            if(l && r) return i;
        }
        return -1;
    }
}