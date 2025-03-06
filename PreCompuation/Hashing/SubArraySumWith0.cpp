#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class Solution {
    public:
      // Complete this function
      // Function to check whether there is a subarray present with 0-sum or not.
      bool subArrayExists(vector<int>& arr) {
      
          unordered_map<int,int> umap; // for storing prefix sums and there occurences
          
          int sum_element = 0;
          int newTarget = 0;
          
          umap[0]++;
          
          for(auto elem : arr)
          {
              sum_element += elem;
              newTarget = sum_element;
              
              if(umap.find(newTarget) != umap.end())
              {
                  return true;
              }
              umap[sum_element]++;
          }
      
      return false;
      }
  };

// BRTUE FORCE :- generate all the subarrays then check whether there sum is coming to be equal to target or not if yes then good to go either not ---> TC:- O(N^3)

// for(int i = 0;i<arr.size();++i)
// {
//     for(int j = i;j<arr.size();++j)
//     {
//         int sum = 0;
//         for(int k = i;k<j;++k)
//         {
//             sum += arr[k];
//         }

//         if(sum == target)
//         {
//             cout<<"We got our element"<<'\n';
//         }
//     }
// }


// BETTER one will be of O(N^2) where we don't have to calculate the sum explicitly we can do it in handy ---> TC:- O(N^2)

// for(int i = 0;i<arr.size();++i)
// {
//      int sum = 0;
//     for(int j = i;j<arr.size();++j)
//     {
//         sum += arr[j];    
//         if(sum == target)
//         {
//             cout<<"We got our element"<<'\n';
//         }
//     }
// }
