class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
        if (nums3.size() % 2 == 0)
            return((nums3[(nums3.size() / 2) - 1] + nums3[nums3.size() / 2]) / (float)2);
        else
            return(nums3[((nums3.size() + 1) / 2) - 1]);
    }
};