class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Index for nums1
    int j = n - 1; // Index for nums2
    int k = m + n - 1; // Index for the merged array

    // Start from the end of both arrays
    while (i >= 0 && j >= 0) {
        // Compare the last elements of nums1 and nums2
        if (nums1[i] > nums2[j]) {
            // Place the larger element at the end of nums1
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are remaining elements in nums2, copy them to nums1
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}
};