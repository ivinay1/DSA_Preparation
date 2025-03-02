#include<iostream>

int main()
{
    // variable declaration must be at top considered as a good pratice
    int num1,num2;
    char op;

    std::cout<<"Enter the numbers";
    std::cin>>num1>>num2;

    std::cout<<"Enter the operator";
    std::cin>>op;

    switch(op)
    {
        case '+':
        std::cout<<num1+num2<<'\n';
        break;
        
        case '-':
        std::cout<<num1-num2<<'\n';
        break;
        
        case '*':
        std::cout<<num1*num2<<'\n';
        break;
        
        case '/':
        std::cout<<num1/num2<<'\n';
        break;

        default:
        std::cout<<"Not a valid operation"<<'\n';
    }

    // ternary operator ==> replacement to single if-else
    int age = 18;
    (age > 18)? std::cout<<"Valid age":std::cout<<"Invalid age";
    

    return 0;
}