#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    // GIVE first non repeating character in array

    int arr[] = {1,5,3,4,3,5,6};

    unordered_map<int,int> umap;

    for(auto elem : arr)
    {
        umap[elem]++;
    }

    for(auto elem : arr)
    {
        if(umap[elem] == 1)
        {
            cout<<"first non repeating element is:- "<<elem<<'\n';
        }
    }

    // brute force approach is take element one by one and then using another loop check its occurence if it is equal 1 you got your man!!! 

    return 0;
}