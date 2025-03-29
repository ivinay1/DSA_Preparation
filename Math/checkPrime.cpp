#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    // BRUTE FORCE:- brute force is start from 2 and iterate till n and check whether given number s divisible or not 

    // OPTIMAL :-  for optimal we can just check till sqrt(N) because "if n has a factor greater than its square root, it must also have a factor smaller than its square root"

    int num;
    cout<<"Enter the number"<<'\n';
    cin>>num;

    bool con = false;

    for(int i = 0;i<sqrt(num);++i)
    {
        if(num%i == 0)
        {
            con = true;
        }
    }

    if(con) 
    {
        cout<<"It is prime";
    }
    else
    {
        cout<<"It is not prime";
    }

    return 0;
}