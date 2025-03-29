#include<iostream>
#include<vector>

using namespace std;


int partition(vector<int>&vec,int low,int high,int pivot)
{
    while(low < high)
    {
        while(vec[low] <= pivot)
        {
            low++;
        }

        while(vec[high] > pivot)
        {
            high--;
        }

        if(low < high)
        {
            swap(vec[low],vec[high]);
        }
    }

    swap(vec[low],vec[high]);
    return high;
}


void quickSort(vector<int>&vec,int low,int high)
{
    if(low < high)
    {
        int pivot = vec[high]; // pivot element
        int pos = partition(vec,low,high,pivot);
        
        quickSort(vec,low,pos-1);
        quickSort(vec,pos,high);
    }
}

int main()
{

    vector<int>arr = {9,8,7,6,5,4,3,2,1};

    quickSort(arr,0,arr.size()-1);

    return 0;
}