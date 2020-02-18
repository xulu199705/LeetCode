// Median of Two Sorted Arrays

#include "leetcode.h"

class Solution {
public:
    double findKthSortedArrays(vector<int>& nums1, int l1, int len1, vector<int>& nums2, int l2, int len2, int k) {
        // assume num1 is shorter
        if(len1 > len2) {
            return findKthSortedArrays(nums2, l2, len2, nums1, l1, len1, k);
        }
        
        // only one array left
        if(len1 == 0) {
            return nums2[l2 + k - 1];
        }
        
        // k == 1
        if(k == 1) {
            return min(nums1[l1], nums2[l2]);
        }
        
        // k nums on the left
        int ind1 = min(k / 2, len1);
        int ind2 = k - ind1;
        
        if(nums1[l1 + ind1 - 1] < nums2[l2 + ind2 - 1]) {
            return findKthSortedArrays(nums1, l1 + ind1, len1 - ind1, nums2, l2, len2, k - ind1);
        } else if(nums1[l1 + ind1 - 1] > nums2[l2 + ind2 - 1]) {
            return findKthSortedArrays(nums1, l1, len1, nums2, l2 + ind2, len2 - ind2, k - ind2);
        } else {
            // equal
            return nums1[l1 + ind1 - 1];
        }
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int nums1_size = nums1.size();
        int nums2_size = nums2.size();
        int total_nums = nums1_size + nums2_size;
        if(total_nums % 2 == 1) {
            // odd
            return findKthSortedArrays(nums1, 0, nums1_size, nums2, 0, nums2_size, (total_nums + 1) / 2);
        } else {
            // even
            return ((findKthSortedArrays(nums1, 0, nums1_size, nums2, 0, nums2_size, total_nums / 2) + 
                   findKthSortedArrays(nums1, 0, nums1_size, nums2, 0, nums2_size, total_nums / 2 + 1)) / 2);
        }
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
