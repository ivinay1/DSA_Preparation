#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<vector>

using namespace std;

int main()
{

    // intersection of arrays
    int a[] = {89,24,75,11,23};
    int b[] = {89,2,4};
    vector<int>result;

    // brute force is of O(N^2) take one by one element from a and then check whether it is present in b if yes then add it to result

    // second approach using map
    unordered_map<int,int> hash_a;
    unordered_map<int,int> hash_b;
    
    for(auto elem_a : a)
    {
        hash_a[elem_a]++;
    }

    for(auto elem_b : b)
    {
        hash_b[elem_b]++;
    }

    for(auto elem : hash_a)
    {
        if(hash_b.find(elem.first) != hash_b.end())
        {
            result.push_back(elem.first);
        }
    }

    // third approach using set (BEST APPROACH)
    unordered_set<int> u_set;

    for(auto elem : a)
    {
        u_set.insert(elem);
    }

    for(auto elem : b)
    {
        auto item = u_set.insert(elem);
        if(item.second == false)
        {
            result.push_back(elem);
        }
    }

    

    return 0;
}