#include<iostream>

using namespace std;

void printN(int num)
{
    if(num <= 0) return;

    cout<<num<<'\n';
    printN(num-1);
}

int main()
{

    printN(8);

    return 0;
}