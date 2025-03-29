
// approach 1( brute) --> use linear search to count frequency of elements from 1 to N
// approach 2(using hashmap)--> hash array elements and there frequencies and check from 1 to N which element has frequncy of 0 and which has 2
// approach 3(optimal1) ---> use this maths formula sum of first n terms --> n*(n+1)/2 
//                      ---> use this maths formula for sum of square of first n terms ---> n*(n+1)*(2n+1)/6;
//                      ---> sumN- sumOFArr(x-y) and sumN^2 - sumOfArr2(x^2-y^2) now use them to get (x+y)



class Solution {

    public:
    
      bool isMissing(int num,vector<int>&ans)
      {
          int count = 0;
          for(auto elem: ans)
          {
              if(num == elem)
              {
                  count++;
              }
          }
          
          return count==0;
      }
    
    
      vector<int> findTwoElement(vector<int>& arr) {
          
          int n = arr.size();
          
          long long int sumN = 0LL;
          long long int sumN2 = 0LL;
          
          // calculating sum of all elements of array
          for(auto elem: arr)
          {
              sumN += elem;
              sumN2 += elem*1LL*elem;
          }
          
          long long int sum1toN = n*(n+1LL)/2;
          long long int sumSquare1toN = (n*(2*n+1LL)*(n+1LL))/6;
          
          long long int resAdd = abs(sumSquare1toN - sumN2)*1LL/abs(sum1toN - sumN)*1LL;
          long long int resSubstract = abs(sumN - sum1toN);
          
          int ans1 = abs(resAdd + resSubstract)/2*1LL;
          int ans2 = abs(resAdd - ans1)*1LL;
          
          
          if(isMissing(ans1,arr))
          {
              return {ans2,ans1};
          }
          return {ans1,ans2};
          
      }
  };

