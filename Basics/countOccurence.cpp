#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main()
{
    
    string name = "abhisekh";

    unordered_map<char,int> umap;

    for(auto elem : name)
    {
        umap[elem]++;
    }

    for(auto elem : umap)
    {
        cout<<"occurence of "<<elem.first<<" is "<<elem.second<<'\n';
    }

    return 0;
}