class Solution {

    private int check(int mid, int n, int m) {
        long ans = 1;

        for (int i = 0; i < n; i++) {
            ans *= mid;

            if (ans > m) {
                return 2;
            }
        }

        if (ans == m) return 1;
        return 0;
    }

    public int nthRoot(int n, int m) {

        if (m == 0) return 0;

        int low = 1;
        int high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int val = check(mid, n, m);

            if (val == 1) {
                return mid;
            } else if (val == 0) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
}