class Solution {
    public:
      vector<int> posNegPair(vector<int> &arr) {
          
          unordered_map<int,int>umap;
          vector<int>result;
          
          sort(arr.begin(),arr.end());
          
          // hashing all the entries in map
          for(auto &elem: arr)
          {
              umap[elem]++;
          }
          
          for(auto &elem : arr)
          {
              if(elem >0 && (umap[-elem] >= 1))
              {
                  result.push_back(-elem);
                  result.push_back(elem);
                  umap[-elem]--;
              }
          }
          
          return result;
      }
  };