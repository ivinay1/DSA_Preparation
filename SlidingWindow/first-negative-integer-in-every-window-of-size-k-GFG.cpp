class Solution {
    public:
      vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
          
          list<int> temp;
          vector<int>result;
          int i = 0; // window start
          int j = 0; // window end
          int n = arr.size();
          
          while(j < n)
          {
              //calculation
              if(arr[j] < 0) temp.push_back(arr[j]);
              
              if(j-i+1 < k) ++j;
              
              // window size hit
              else if(j-i+1 == k)
              {
                  //conclusion
                  if(temp.empty())
                  {
                      result.push_back(0);
                  }
                  else
                  {
                      result.push_back(temp.front());
                  }
                  // slide the window
                  if(!temp.empty() && arr[i] == temp.front())
                  {
                      temp.pop_front();
                  }
                  ++i;
                  ++j;
              }
              
          }
          
          return result;
      }