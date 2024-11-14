//Problem Description => https://leetcode.com/problems/peak-index-in-a-mountain-array/description
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid, st = 1;
        int end = arr.size() - 2;
        while (st <= end) {
            mid = st + (end - st) / 2;
            if (arr.at(mid - 1) < arr.at(mid) && arr.at(mid) > arr.at(mid + 1))
                return mid;
            if (arr.at(mid - 1) < arr.at(mid))
                st = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
}