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

    vector<int>extractDigits;

    int originalNumber = num;

    while(num)
    {
        extractDigits.push_back(num%10);
        num = num/10;
    }

    int sumValue = 0;
    for(auto elem: extractDigits)
    {
        cout<<elem<<" ";
    }

    for(int i = 0;i<extractDigits.size();++i)
    {
            sumValue += round(pow(extractDigits[i],extractDigits.size()));
    }

    cout<<(sumValue == originalNumber);

    return 0;
}