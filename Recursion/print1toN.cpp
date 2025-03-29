#include<iostream>

using namespace std;

void printN(int num)
{
    if(num <= 0) return;

    printN(num-1);
    cout<<num<<'\n';
}

int main()
{
    printN(10);

    return 0;
}