class Solution {
    public:
      // a,b : the arrays
      // Function to return a list containing the union of the two arrays.
      vector<int> findUnion(vector<int> &a, vector<int> &b) {
      
          set<int>uset;
          vector<int>result;
          
          for(auto elem : a)
          {
              uset.insert(elem);
          }
      
          for(auto elem : b)
          {
              uset.insert(elem);
          }
      
          for(auto elem : uset)
          {
              result.push_back(elem);
          }
          
          return result;
      }
  };