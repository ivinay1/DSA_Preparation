#include<iostream>

int main()
{
    // three logical operators we have
    //1. &&  ==> both conditions must be true
    //2. || ==> atleast one of them must true
    //3. ! ==> reverse the logical state of the operand

    int temp;

    std::cout<<"Enter the temperature";
    std::cin>>temp;

    if(temp > 0 && temp <30)
    {
        std::cout<<"Temp is fine";
    }

}