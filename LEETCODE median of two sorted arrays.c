class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;
        int mid1 = (total - 1) / 2;
        int mid2 = total / 2;

        int i = 0, j = 0, count = 0;
        int val1 = 0, val2 = 0;

        while (count <= mid2) {
            int val;
            if (i < m && (j >= n || nums1[i] <= nums2[j])) {
                val = nums1[i++];
            } else {
                val = nums2[j++];
            }

            if (count == mid1) val1 = val;
            if (count == mid2) val2 = val;
            count++;
        }

        if (total % 2 == 0) {
            return (val1 + val2) / 2.0;
        } else {
            return val2;
        }
    }
};
