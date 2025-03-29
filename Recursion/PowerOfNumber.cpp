#include<iostream>

using namespace std;

int Power(int num,int exp)
{
    if(exp == 0) return 1;

    if(exp&1)
    {
        return num*Power(num,exp/2)*Power(num,exp/2);
    }
    else
    {
        return Power(num,exp/2)*Power(num,exp/2);
    }
}

int main()
{
    // TIME COMPLEXITY:- It takes O(2^N) time
    // SPACE COMPLEXITY:- Auxiliary space is O(1) and stack space (N);

    //NOTE:- using simple formula ---> (number^n) = (number^n/2)^2

    cout<<Power(3,5)<<'\n';
    return 0;
}