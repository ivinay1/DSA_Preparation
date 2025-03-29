//** HASHING
//**       You have Given An Array contains boht positive and non-positive numbers, element are in the range from -MAX to +MAX_PATH
//**   Our task is to search if some number is present inthe array or not in O(1) time.
//**                  11    2   -3   4   -10


#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define MAX 1000

using namespace std;

int Hash_array[MAX+1][2];

void insert_hash(vector<int>&arr)
{
    for(int i = 0;i<arr.size();++i)
    {
        if(arr[i]>=0)
        {
            Hash_array[arr[i]][0] = true;
        }
        else
        {
            Hash_array[abs(arr[i])][1] = true;
        }
    }
}

bool search_hash(vector<int>&arr,int n)
{
    if(n>=0)
    {
        if(Hash_array[n][0]==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(Hash_array[n][1]==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}


int main()
{
    vector<int>arr = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    insert_hash(arr);
    
    if(search_hash(arr,6))
    {
        cout<<"Element found!!!";
    }
    else
    {
        cout<<"ELement not found!!!";
    }

    return 0;
}