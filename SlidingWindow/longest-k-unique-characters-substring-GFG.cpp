
class Solution {
    public:
      int longestKSubstr(string &s, int k) {
          
          unordered_map<char,int> charCount;
          
          int maxLen = -1;
          int i = 0;
          int j = 0;
          int n = s.length();
          
          while(j<n)
          {
              // computation
              charCount[s[j]]++;
              
              if(charCount.size() < k) ++j;
              
              else if(charCount.size() == k)
              {
                  // conclusion
                  maxLen = max(maxLen,j-i+1);
                  ++j;
              }
              else
              {
                  // sliding the window
                  while(charCount.size() > k)
                  {
                      charCount[s[i]]--;
                      if(!charCount[s[i]])
                      {
                          charCount.erase(s[i]);
                      }
                      ++i;
                  }
                  ++j;
              }
              
          }
          
          return maxLen;
          
      }
  }