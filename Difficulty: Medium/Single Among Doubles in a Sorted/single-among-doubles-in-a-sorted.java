class Solution {
    int single(int[] arr) {
        // code here
     int n = arr.length;
     int low = 0;
     int high = n-1;
     while(low<high){
         int mid = (low+high)/2;
         if(mid%2==1) mid--;
         if(arr[mid] == arr[mid+1]){
             low = mid+2;
         }
         else{
             high = mid;
         }
     }
     return arr[low];
    }
}