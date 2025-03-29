#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void printVector(vector<int>&v)
{
    for(auto ele : v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>arr = {1,2,3,4,5,6,7,8};

    int size = arr.size();

    vector<int>prefix_arr(size);

    prefix_arr[0] = arr[0];
    
    for(int i = 1;i<size;++i)
    {
        prefix_arr[i] = prefix_arr[i-1]+arr[i];
    }

    cout<<"The Given array is:-"<<endl;
    printVector(arr);
    cout<<"The Prefix_sum of given array is:-"<<endl;
    printVector(prefix_arr);
    return 0;
}