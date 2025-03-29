
// BRUTE FORCE:- shift element one by one :- TC: O(k*n)  SC: O(1)

// BETTER :- take a temporaray array and put element from k to n there now shift current array elements from 0 to n-k to k places ahead and now copy the elements copies from th array into temporary array from 0 to k TC:- O(n) SC:- O(k)  


class Solution {
    public:
    
        void reverseArr(vector<int>&nums,int start,int end)
        {
            cout<<"Reverse the array from "<<start<<" "<<end<<'\n';
            int left = start;
            int right = end;
            while(left < right)
            {
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
        }
    
        void rotate(vector<int>& nums, int k) {
            
            int n = nums.size();
    
            k = k%(n);
           
            reverseArr(nums,0,n-k-1);
            reverseArr(nums,n-k,n-1);
             reverseArr(nums,0,n-1);
    
        }
    };