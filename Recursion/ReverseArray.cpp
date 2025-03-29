#include<iostream>
#include<vector>

using namespace std;

void reverseArr(vector<int>&vec,int left,int right)
{
    if(left >= right) return;
    swap(vec[left],vec[right]);
    reverseArr(vec,left+1,right-1);
}


int main()
{

    vector<int> vec = {1,2,3,4,5,6};
    reverseArr(vec,0,vec.size()-1);

    for(auto &elem : vec)
    {
        cout<<elem<<" ";
    }

    return 0;
}