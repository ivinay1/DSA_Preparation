#include<iostream>

int main()
{
    // calculation always occurs in higher datatype 
    // double <-- float <-- long long int <-- long int <-- int <-- character

    double a = 3/2;
    std::cout<<a;

    // operator precedence --> *,/ then +- if all of same priority then left to right
    std::cout<<3*7/2;

    // overflow --> when container's size jo aa skta hai value usse paar ho jaye
    // 10 power -9 < int < 10 power 9
    // 10 power -12 < long int < 10 power 12
    // 10 power -18 < long long int < 10 power 18

    // you can use expression like
    int a = 1000000;
    int b = 1000000;

    std::cout<< a*1LL*b;

    //NOTE:- In DSA problems constraint mein jo input ka size hota hai that define the time complexiy of that problem

    // If you want last digit then do its modulo by 10 simply if you want last two digit then modulo by 100 and if you want to shorten it then divide by 10 to shorten it by one place 


    return 0;
}