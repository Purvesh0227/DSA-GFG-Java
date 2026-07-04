class Solution {
    ArrayList<Integer> find(int arr[], int x) {
        // code here
         int n = arr.length;
        int first = -1;
        int last = -1;

        for(int i = 0; i < n; i++) {
            if(arr[i] == x) {
                if(first == -1) {
                    first = i;
                }
                last = i;
            }
        }

        ArrayList<Integer> ans = new ArrayList<>();
        ans.add(first);
        ans.add(last);
        return ans;
    }
}
