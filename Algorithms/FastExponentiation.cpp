// used in fast calculation

#include<iostream>

using namespace std;

double binaryExponentiation(double x,long n)
{
    if( n == 0)
    {
        return 1.0;
    }

    if(n<0)
    {
        return 1/binaryExponentiation(x,-n);   // "-n" nahi karoge toh woh phir n<0 mein aayega aate rahega infinte time ab dekho hamein 2ki power -32 nikalna hota hai t hmm kaise nikalte hai 1/2ki power 5 na 5 position se jo aaye usko 1 se divide kr diya bsss 
    }

    if(n%2==0)
    {
        return binaryExponentiation(x*x,n/2);
    }
    else
    {
        return x*binaryExponentiation(x*x,(n-1)/2);
    }
}

int main()
{

    double n = binaryExponentiation(2.2,5);
    cout<<n<<endl;
    return 0;
}