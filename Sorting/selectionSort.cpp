#include<iostream>

using namespace std;

int main()
{

    int arr[] = {6,1,2,4,10,8};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<size;++i)
    {
        int min_elem_idx = i;
        for(int j = i;j<size;++j)
        {
            if(arr[j] < arr[min_elem_idx])
            {
                min_elem_idx = j;
            }
        }
        swap(arr[min_elem_idx],arr[i]);
    }

    for(auto elem : arr)
    {
        cout<<elem<<" ";
    }

    return 0;
}