#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main()
{
    // find a pair of distinct index elements in array whose sum must add up to target

    int arr[] = {1,4,45,6,10,8};
    int target = 16;
    int n = sizeof(arr)/sizeof(arr[0]);

    // Brute force:- using two loops O(N^2) time complexity space complexity O(1)

    
    // Better:- using first sorting and then Two pointer
    
    sort(arr,arr+n);
    int left = 0,right = n-1;
    while(left < right)
    {
        int pairSum = arr[left] + arr[right];
        if(pairSum == target)
        {
            cout<<"We got our element"<<'\n';
        }
        else if(pairSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout<<"unable to get our element"<<'\n';


    // BEST APPROACH :- using unordered map  
    // time complexity :- O(N)
    // space complexity :- O(N)

    unordered_map<int,int> umap;

    for(auto elem : arr)
    {
        umap[elem]++;
    }
    
    for(auto elem : arr)
    {
        int newTarget = target - elem;
        if(newTarget == elem && umap[target] > 1)
        {
            cout<<"yes pair is present"<<'\n';
        }
        else if(newTarget != elem && umap[target] >=1)
        {
            cout<<"yes pair is present"<<'\n';
        }
    }
    cout<<"Element is not present"<<'\n';

    return 0;
}