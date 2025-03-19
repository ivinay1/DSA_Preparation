class Solution {
    public:
      vector<int> maxOfSubarrays(vector<int>& arr, int k) {
          
          list<int>temp;
          vector<int>result;
          int i = 0;
          int j = 0;
          int n = arr.size();
          
          while(j <n)
          {
              //calculation
              while(temp.size() > 0 && arr[j] > temp.back())
              {
                  temp.pop_back();
              }
              temp.push_back(arr[j]);
              
              if(j-i+1 < k) ++j;
              
              // window size hit
              else 
              {
                  // computation
                  result.push_back(temp.front());
                  // sliding the window
                  if(arr[i] == temp.front())
                  {
                      temp.pop_front();
                  }
                  ++i;
                  ++j;
              }
              
          }
          
          return result;
          
      }
  };