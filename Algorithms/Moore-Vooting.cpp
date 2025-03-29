class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            
            int majElem = nums[0];
            int count = 1;
    
            for(int i = 1;i<nums.size();++i)
            {
                if(count == 0)
                {
                    majElem = nums[i];
                    count = 1;
                }
                else
                { 
                    if(nums[i] == majElem)
                    {
                        count++;
                    }
                    else
                    {
                        count--;
                    }
                        
                }
            }
    
            return majElem;
        }
    };