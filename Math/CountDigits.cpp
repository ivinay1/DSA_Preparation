#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num = 1234567;
    int totalDigits = 0;

    while(num)
    {
        totalDigits++;
        num = num/10;
    }

    cout<<"The total digits in the are "<<totalDigits<<'\n';

    // TIME COMPLEXITY :-  In the worst case if the number is O(log(base 10) N + 1) as we in each iteration we divide the given number by 10 in each iteration.
    // SPACE COMPLEXITY :- O(1)

    //?...........................OPTIMAL APPROACH...........................................................

    num = 1234567;
    cout<<"The total digits in the are "<<ceil(log10(num))<<'\n';

    // TIME COMPLEXITY :- As log10(N) is a arithmetic operator so it will take O(1) time 
    // SPACE COMPLEXITY :- O(1)

    return 0;
}