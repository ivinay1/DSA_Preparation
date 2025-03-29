#include<iostream>
#include<algorithm>
 
using namespace std;

// It gives eucledian lemma technique/formulae which says GCD(a,b) = GCD(a%b,b) ---> It is a recursive approach
int GCDFunc(int a,int b)
{
    if(a == 0) return b;

    if(b == 0) return a;

    if(a==b) return a;

    if(a>b) 
    return GCDFunc(a-b,a);

    return GCDFunc(a,b-a);
}


// It is simple iterative approach apko ek aisa sbse bda number dhundhna hai jo dono ko divide kre GCD ki minimum value 1 ho skti hai max min(a,b)
int GCDIterative(int a,int b)
{
    int res = min(a,b);

    while(res>1)
    {
        if((a%res == 0) && (b%res == 0)) // if res divides both number then we are good to go 
            break;

        res--;  // if not decrease its value and check it again
    }
}

int main()
{

    // direct GCD function which calculates GCD in O(log(min(a,b))) added to cpp 17
    cout<<"gcd of 2 and 17 is "<<__gcd(2,17)<<'\n'; 
    // using recursive approach
    cout<<"gcd of 2 and 17 is "<<GCDFunc(2,17)<<'\n'; 
    cout<<"gcd of 2 and 17 is "<<GCDIterative(2,17)<<'\n'; 

    return 0;
}