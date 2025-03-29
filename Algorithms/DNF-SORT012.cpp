class Solution {
    public:
        void sortColors(vector<int>& nums) {
            
            int n = nums.size();
            int pointerPos_0 = 0;;
            int pointerPos_2 = n-1;
    
            int traversalPointer = 0;
    
            while(traversalPointer <= pointerPos_2)
            {
                if(nums[traversalPointer] == 0)
                {
                    swap(nums[pointerPos_0++],nums[traversalPointer++]);
                }
    
                else if(nums[traversalPointer] == 2)
                {
                    swap(nums[pointerPos_2--],nums[traversalPointer]);
                }
    
                else 
                {
                    traversalPointer++;
                }
            }
    
         
        }
    };