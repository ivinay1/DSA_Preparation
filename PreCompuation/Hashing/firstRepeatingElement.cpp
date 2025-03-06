#include<iostream>
#include<unordered_set>
#include<unordered_map>

using namespace std;

int main()
{
    // GIVE first repeating character in array
    int arr[] = {-1,2,-1,3,2};

    unordered_set<int> st;

    for(auto elem: arr)
    {
        auto it = st.insert(elem);
        if(!it.second)
        {
            cout<<"first repeating element is:- "<<elem<<'\n';
            break;
        }
    }


    // second approach
    unordered_map<char,int> umap;

    for(auto elem : arr)
    {
        umap[elem]++;
    }

    for(auto elem : arr)
    {
        if(umap[elem] > 1)
        {
            cout<<"first element in array "<<elem<<'\n';
            break;
        }
    }

    // brute force approach is take element one by one and then using another loop check its occurence if it is greater than 1 you got your man!!! 

    return 0;
}