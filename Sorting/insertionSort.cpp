#include<iostream>

using namespace std;

int main()
{
    int arr[] = {5,4,2,8,9,10,1};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i =0;i<size;++i)
    {
        int key = arr[i+1];
        int j = i+1;

        while(j>0 && arr[j-1] > key)
        {
            arr[j] = arr[j-1];
            --j;
        }
        arr[j] = key;
    }

    for(auto elem : arr)
    {
        cout<<elem<<" ";
    }

    return 0;
}