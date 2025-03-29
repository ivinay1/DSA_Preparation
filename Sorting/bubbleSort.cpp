#include<iostream>

using namespace std;

int main()
{
    int arr[] =  {1,5,3,2,9,10};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<size;++i) // for number of passes
    {
        for(int j = 0;j<size-i-1;++j) // for comparisons
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(auto &elem :arr)
    {
        cout<<elem<<" ";
    }


    return 0;
}