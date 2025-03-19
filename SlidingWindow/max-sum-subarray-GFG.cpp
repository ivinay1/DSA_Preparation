class Solution {
    public:
      int maximumSumSubarray(vector<int>& arr, int k) {
         
         int n = arr.size();
         int maxSum = -1;
         int currSum = 0;
         int windowStart = 0;
         int windowEnd = 0;
         
         while(windowEnd < n)
         {
             // calculation
             currSum += arr[windowEnd];
             
             if(windowEnd - windowStart +1 < k) ++windowEnd;
             
             else if(windowEnd - windowStart + 1 == k)
             {
                 //calculating answer
                 maxSum = max(maxSum,currSum);
                 // sliding the window
                   currSum -= arr[windowStart];
                 ++windowStart;
                 ++windowEnd;
             }
             
         }
         
         return maxSum;
         
      }
  };