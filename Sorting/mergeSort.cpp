#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(vector<int>&vec,int lowerBound,int mid,int upperBound)
{
    int n1 = mid-lowerBound+1;
    int n2 = upperBound - lowerBound;
    
    int* arr1 = new int[n1];  
    int* arr2 = new int[n2];

    for(int i = 0;i<n1;++i)
    {
        arr1[i] = vec[i+lowerBound];
    }

    for(int j = 0;j<n2;++j)
    {
        arr2[j] = vec[j+mid+1];
    }

    // Merging the two arrays
    int i = 0;
    int j = 0;
    int k = lowerBound;

    while(i<n1 && j<n2)
    {
        if(arr1[i] <= arr2[j])
        {
            vec[k] = arr1[i];
            i++;
        }
        else
        {
            vec[k] = arr2[j];
            ++j;
        }
        ++k;
    }

    // copy remaining elements
    while(i<n1)
    {
        vec[k] = arr1[i];
        ++i;
        ++k;
    }

    // copy remaining elements
    while(j<n2)
    {
        vec[k] = arr2[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int>& vec,int lowerBound,int upperBound)
{
    if(lowerBound < upperBound)
    {
        int mid = (upperBound-lowerBound)/2 + lowerBound;

        mergeSort(vec,lowerBound,mid);
        mergeSort(vec,mid+1,upperBound);
        merge(vec,lowerBound,mid,upperBound);
    }
    else
    {
        return;
    }
}

int main()
{

    vector<int>arr;

    int size ;
    cout<<"Enter the total elements"<<'\n';
    cin>>size;

    for(int i = 0;i<size;++i)
    {
        int elem;
        cout<<"Enter the element"<<'\n';
        cin>>elem;
        arr.push_back(elem);
    }

    for(auto &elem: arr)
    {
        cout<<elem<<" ";
    }

    cout<<"\n";

    mergeSort(arr,0,size);

    for(auto &elem: arr)
    {
        cout<<elem<<" ";
    }
    
    return 0;
}