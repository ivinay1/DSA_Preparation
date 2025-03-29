#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<'\n';
    cin>>num;

    vector<int>divisors;

    for(int i = 1;i<=sqrt(num);++i)
    {
        if(num %i == 0) 
        {
            if(i == num/i)
            {
                divisors.push_back(i);
            }
            else
            {
                divisors.push_back(i);
                divisors.push_back(num/i);
            }
        }
       
    }

    for(auto &elem : divisors)
    {
        cout<<elem<<'\n';
    }

    //TIME COMPLEXITY:- O(sqrt(N))
    
    return 0;
}