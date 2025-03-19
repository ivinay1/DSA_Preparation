
//BRUTE FORCE:- generate all subarrays
// we can also use but that is applicable when all elements are positive 


class Solution {
    public:
      int longestSubarray(vector<int>& arr, int k) {
          
         int n = arr.size();
         int maxLen = 0;
         int currSum = 0;
         unordered_map<int,int> umap;
         
         for(int i = 0;i<n;++i)
         {
            currSum += arr[i];
            int target = currSum - k;
            
            if(currSum == k) maxLen = i+1; 
            
            if(umap.find(target) != umap.end())
            {
              maxLen = max(maxLen,(i - umap[target]));
            }
            
            if(umap.find(currSum) == umap.end())
            {
                umap[currSum] = i;
            }
            
         }
          
          return maxLen;
      }
  };

