#include<iostream>
#include<string>

int main()
{
    // integer (whole number)
    int age = 21;
    int year = 14;
    int days = 365;

    std::cout<<age<<'\n';

    // double (number including decimal with upto 15 places)
    double price = 4.5232345;
    double weight = 8.94949494;

    // float (number including decimal with upto 8 decimal places)
    float height = 5.789;

    // single character
    char grade = 'A';

    // boolean (true or false)
    bool student = false;
    bool power = true;

    // string (object containing sequence of characters)
    std::string name = "vinay joshi";
    std::cout<<name<<"\n";

    // for making a variable constant so that others cannot use it you can use prefix "const" before the variable

    const int PI = 3.14;
    std::cout<<2*PI*4<<"\n";

    return 0;
}