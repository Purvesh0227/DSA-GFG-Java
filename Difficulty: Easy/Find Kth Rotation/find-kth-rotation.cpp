class Solution {
public:
    int findKRotation(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        int minindex = 0;
        while (low <= high) {
            if (arr[low] <= arr[high]) { // this segment is sorted
                if (arr[low] < arr[minindex]) minindex = low;
                break;
            }
            int mid = low + (high - low) / 2;
            if (arr[mid] < arr[minindex]) minindex = mid;
            if (arr[mid] >= arr[low]) low = mid + 1;
            else high = mid - 1;
        }
        return minindex;
    }
};