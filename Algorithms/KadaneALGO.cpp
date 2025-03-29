class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            
            int max_so_far = INT_MIN;
            int max_ends_here = 0;
    
            for(int i =0;i<nums.size();++i)
            {
                max_ends_here = max(max_ends_here + nums[i],nums[i]);
                max_so_far = max(max_ends_here,max_so_far);  
            }
    
            return max_so_far;
        }
    };