class Solution {
    public:
        bool check(vector<int>& nums) {
            
            // counting inversion count
            int n = nums.size();
            int inversionCount = 0;
    
            for(int i = 1;i<n;++i)
            {
                if(nums[i-1] > nums[i])
                {
                    inversionCount++;
                }
            }
    
            if(nums[0] < nums[n-1]) inversionCount++;
    
            return inversionCount <=1;
        }
    };