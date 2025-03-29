class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            
        // starting from last because we know bade number last mein aayenge aur last mein hi zero hai
           int nums1Index = m-1;
           int nums2Index = n-1;
           int mergeIndex = m+n-1;
    
           while(nums2Index >= 0) // jb tak nums2Index ke element saare na aa jaye ya compare ho jaye
           {
            if(nums1Index>=0 && nums1[nums1Index] > nums2[nums2Index])
            {
                nums1[mergeIndex] = nums1[nums1Index];
                nums1Index--;
            }
            else // nums1 toh exhaust ho gaya but still nums2 mein element present hai ya nums2 ka element bada hai 
            {
                nums1[mergeIndex] = nums2[nums2Index];
                nums2Index--;
            }
                mergeIndex--;
           }
    
        }
    };