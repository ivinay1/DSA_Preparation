class Solution {
    public:
        int missingNumber(vector<int>& nums) {
      
            // BRUTE FORCE 
            sort(nums.begin(),nums.end());
                        int n = nums.size();
                        int i = 0;
                
                        while(i<n)
                        {
                            if(nums[i] == i)
                            {
                                ++i;
                            }
                            else
                            {
                                return i;
                            }
                        }

            // OPTIMAL APPROACH TC:- O(n) SC:- O(1) 
            int n = nums.size();
            int XORfromOtoN = 0;
    
            for(int i = 0;i<=n;++i)
            {
                XORfromOtoN = XORfromOtoN^i;
            }
    
            for(int i =0;i<n;++i)
            {
               XORfromOtoN = XORfromOtoN ^ nums[i];
            }
    
            return XORfromOtoN;
        }
    };