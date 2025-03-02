class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = n + m -1 ;
        int i = m ;
        int j = 0;

        while (i<=k )
        {
            nums1[i++] = nums2[j++];
        }
        sort(nums1.begin(),nums1.end());
         // tc -> n log n ;
         
        
    }
};