#include<iostream>

int main()
{
    // using third variable
    int first = 10;
    int second = 20;

    std::cout<<"before swapping "<<first<<" "<<second<<'\n';
    int temp = first;
    first = second;
    second = temp;
    std::cout<<"after swapping "<<first<<" "<<second<<'\n';

    // without third variable
    int a = 10;
    int b = 20;

    std::cout<<"before swapping "<<a<<" "<<b<<'\n';
    a = a+b;
    b = a-b;
    a = a-b;
    std::cout<<"after swapping "<<a<<" "<<b<<'\n';

    // without using third variable using XOR operator
    int a1 = 10;
    int b1 = 20;

    std::cout<<"before swapping "<<a1<<" "<<b1<<'\n';
    a1 = a1^b1;
    b1 = a1^b1;
    a1 = a1^b1;
    std::cout<<"after swapping "<<a1<<" "<<b1<<'\n';

    return 0;
}