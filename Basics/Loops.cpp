#include<iostream>

int main()
{

    // for loop ( when we know the number of iterations)
    for(int i = 1;i<=10;++i)
    {
        std::cout<<i<<'\n';
    }

    // while loop (when we don't know number of iterations)
    int num1 = 4;
    int num2 = 10;

    while(num2 > num1)
    {
        std::cout<<num1<<'\n';
        num1++;
    }

    // do while loop when we want to execute atleast one time

    int age;
    do{
        std::cout<<"Enter the number"<<'\n';
        std::cin>>age;
        if(age < 18)
        {
            std::cout<<'invalid age'<<'\n';
        }
        else
        {
            std::cout<<'valid age'<<'\n';
        }
    }while(true);


    // for of loop and Iterators

    return 0;
}