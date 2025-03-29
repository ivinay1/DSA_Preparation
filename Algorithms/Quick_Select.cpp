#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int partition(vector<int>&nums,int l,int r)
{
    int start = l;
    int end = r;
    int pivot = nums[l];

    while(start<=end)
    {
        if(nums[start]>pivot && nums[end]<pivot)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        else if(nums[start]<pivot)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    swap(nums[l],nums[end]);
    return end;
}


int main()
{
    vector<int>nums = {0,5,4,2,6,7,1};
    int end = nums.size()-1;
    int start = 0;
    int k = 6;
    while(true)
    {
        int idx = partition(nums,start,end);
        if(idx == k-1)
        {
            cout<<nums[k-1]<<endl;
            break;
        }
        else if(idx <k-1)
        {
            start = idx+1;
        }
        else
        {
             end = idx-1;
           
        }
    }

    return 0;
}