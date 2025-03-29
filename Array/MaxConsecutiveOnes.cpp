class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
    
          int sum = 0;
          int maxOneCount  = 0;
          
          for(auto num : nums)
          {
            if(num == 1) 
            {
                sum++;
                maxOneCount = max(sum,maxOneCount);
            }
            else
            {
                sum = 0;
            }
    
          }
    
            return maxOneCount;
        }
    };