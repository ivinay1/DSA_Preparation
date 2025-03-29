#include<iostream>

using namespace std;

int main()
{
    int arr[] = {4,0,8,9,1};

    int size = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    for(int i = 0;i<size;++i)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<"Maximum element is "<<max<<'\n';
    return 0;
}