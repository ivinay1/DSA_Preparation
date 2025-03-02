#include<iostream>

int main()
{
    int num;
    int revNum  = 0;
    std::cout<<"Enter the number";
    std::cin>>num;

    
    while(num)
    {
        revNum = revNum*10 + num%10;
        num = num/10;
    }

    std::cout<<"Reversed number is "<<revNum<<'\n';
    
    return 0;
}