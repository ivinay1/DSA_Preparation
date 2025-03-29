
class Solution {
    public:
      int maxLen(vector<int>& arr) {
          
          int n = arr.size();
          int result = 0;
           int currSum = 0;
          unordered_map<int,int>umap;
          
          
          for(int i = 0;i<n;++i)
          {
              currSum += arr[i];
              
              if(currSum == 0)
              {
                  result = i+1;
              }
              
              if(umap.find(currSum) != umap.end())
              {
                  result = max(result,i-umap[currSum]);
              }
              else
              {
                  umap[currSum] = i;
              }
              
          }
          
          return result; 
          
      }
  };