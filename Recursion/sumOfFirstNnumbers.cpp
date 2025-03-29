#include<iostream>

using namespace std;

// using a global variable and updating the sum
int sum = 0;
void sumNumbers_1(int num)
{
    if(num <= 0) return ;
    sum += num;
    sumNumbers_1(num-1);
}

// using parameterised recursion ---> aap ek parameter pass krte hai aur each recursion call pr aap uss parameter ki value increase or decrease (update krte hai) 
int sumNumbers_2(int num,int sum)
{
    if(num <= 0) return sum;
    return sumNumbers_2(num-1,sum+num);
}

// using functional way ---> aap ek functon return krwate ho ya kahu ki app result ko function pr chorr dete ho
int sumNumbers_3(int num)
{
    if(num <= 0) return num;
    return num + sumNumbers_3(num-1);
}



int main()
{
    sumNumbers_1(5);
    cout<<sum<<'\n';
    cout<<sumNumbers_2(5,0)<<'\n'; 
    cout<<sumNumbers_3(5)<<'\n';

    // NOTE:- in both parameteired and functional recursion we are returning a function so it will go to deep and while returning to the top the last funtion call will be carried to the top now we can update it while returning as we do it in functional way code or we can update the parameter 
    
    return 0;
}