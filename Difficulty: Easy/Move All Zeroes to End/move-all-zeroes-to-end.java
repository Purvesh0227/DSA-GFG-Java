class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        int left = 0;
        int temp;
        for(int right=0;right<arr.length;right++){
            if(arr[right]!=0){
                temp = arr[right];
                arr[right] = arr[left];
                arr[left] = temp;
                left++;
            }
        }
    }
}