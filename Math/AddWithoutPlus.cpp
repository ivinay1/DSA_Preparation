#include<iostream>

int sum(int a,int b)
{
    int carry = b;
    int sum;
    
    while(carry)
    {
        sum = a^b;  //XOR acts as '+' except carry bit so we have to add carry bit also
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    return sum;
}

int main()
{
    std::cout<<sum(10,12)<<'\n';    
 
    // another way to do it is by using ++ operator

    return 0;
}