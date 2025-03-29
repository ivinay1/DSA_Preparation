#include<iostream>
#include<vector>

using namespace std;

int arraySum(vector<int>&vec,int idx)
{
    if(idx == vec.size()) return 0;
    return vec[idx] + arraySum(vec,idx+1);
}

int main()
{
    vector<int>vec = {1,2,3,4,5};
    cout<<arraySum(vec,0)<<'\n';
    return 0;
}