#include<iostream>

int main()
{
    // variable declaration must be at top considered as a good pratice
    int age;

    std::cout<<"Enter the age";
    std::cin>>age;

    if(age >18)
    {
        std::cout<<"You are a adult now";
    }
    else if(age <10)
    {
        std::cout<<"You are a infant now";
    }
    else
    {
        std::cout<<"You are adult";
    }

    return 0;
}