class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            
            int posPtr = 0;
            for(int i = 1;i<nums.size();++i)
            {
                if(nums[i-1] == nums[i])
                {
                    continue;
                }
                else
                {
                    nums[++posPtr] = nums[i];
                }
            }
    
            return posPtr+1;
        }
    };