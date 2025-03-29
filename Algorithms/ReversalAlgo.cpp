#include<iostream>
#include<vector>

using namespace std;

void reverseArr(vector<int>&nums,int start,int end)
{
    while (start < end) {  
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

int main()
{
    // this algo is used to rotate an array in O(n) time with O(1) space complexity
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;

    int n = nums.size();
    k = k % n; // Normalize k to be within the bounds of the array length

    // Step 1: Reverse the entire array
    reverseArr(nums, 0, n - 1);

    // Step 2: Reverse the first k elements
    reverseArr(nums, 0, k - 1);

    // Step 3: Reverse the remaining n-k elements
    reverseArr(nums, k, n - 1);

    return 0;
}