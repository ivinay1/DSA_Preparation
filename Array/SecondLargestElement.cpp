#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>&vec,int low,int high)
{
    int start = low;
    int end = high;
    int pivot = vec[low];

    while(start < end)
    {
       
        while(vec[start] <= pivot)
        {
            start++;
        }

        while(vec[end] > pivot)
        {
            end--;
        }

        if(start<=end)
        {
            swap(vec[start],vec[end]);
        }
    }

    swap(vec[low],vec[end]);

    return end;
}


int main()
{
    // BRUTE FORCE:- Sort the array and at the second last position you'll get the second largest element nut only works when the array do not contains duplicate elements (so you have to make a extra step to first put all elements in set)
    // TC:- O(N(logN))    SC:- O(N)

    // BETTER APPROACH:- just like you find the largest element and smallest you can also find the second largest and second smallest
    // TC:- O(N)        SC:- O(1)

    // OPTIMAL:- Use the QuickSelect Algo ----> In worst case:- O(N^2) and in Avg Case O(N) SC:- O(1)

    // ALTERNATE SOLUTION:- we can also use priority queue for this (but you have to make a extra step to first put all elements in set)
    // TC:- O(N)        SC:- O(N)

    vector<int> arr1 = {9,7,1,6,2,10,8};

    int k = 6;
    int start = 0;
    int end = arr1.size()-1;

    while(true)
    {
        int pos = partition(arr1,start,end);

        if(pos == k-1)
        {
            cout<<arr1[k-1]<<'\n';
            break;
        }
        else if(pos > k-1)
        {
            end = pos-1;
        }
        else
        {
            start = pos+1;
        }
        
    }


    // USING ALTERNATE SOLUTION

    vector<int>arr2 = {1,2,6,7,8,9,13,12};

    int MAX = -1;
    int SMAX = MAX;
    for(int i = 0;i<arr2.size();++i)
    {
        if(arr2[i] > MAX)
        {
            SMAX = MAX;
            MAX = arr2[i];
        }

        if(arr2[i] > SMAX && arr2[i]<MAX )
        {
            SMAX = arr2[i];
        }

    }

    cout<<SMAX<<"\n";

    return 0;
}