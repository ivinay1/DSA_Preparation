#include<iostream>
#include<string>

using  text_t = std::string;

int main()
{
    // getline(std::cin,<variable_name>) is used to take the strings with spaces as spaces are ignored while taking string input

    text_t name = "vinay joshi";
    std::cout<<"Enter your name: "<<"\n";
    std::getline(std::cin,name);
    std::cout<<name;

    // typecasting = converting one datatype to another type we can do it either "implicitly"(automatic) or "explicitly"
    
    // implicit
    char c = 100;
    std::cout<<c<<"\n";

    //explicit
    char c = 'a';
    std::cout<< (int)c;

    // in CPP we take user input using extraction operator (">>") and insertion operator ("<<")
    
    return 0;
}