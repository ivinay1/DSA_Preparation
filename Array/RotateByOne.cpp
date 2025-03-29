#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec = {1,2,3,4,5,6};

    int n = vec.size()-1;

    int lastDigit = vec[n];

    for(int i = n;i>=1;--i)
    {
        vec[i] = vec[i-1];
    }

    vec[0] = lastDigit;

    for(auto elem: vec)
    {
        cout<<elem<<" ";
    }

    return 0;
}