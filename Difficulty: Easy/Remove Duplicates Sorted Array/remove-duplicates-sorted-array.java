class Solution {
    ArrayList<Integer> removeDuplicates(int[] nums) {
        // code here
        int i = 0;
       for(int j=1;j<nums.length;j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i] = nums[j];
        }
       }
        ArrayList<Integer> ans = new ArrayList<>();

        for (int k = 0; k <= i; k++) {
            ans.add(nums[k]);
        }

        return ans;
    }
}
