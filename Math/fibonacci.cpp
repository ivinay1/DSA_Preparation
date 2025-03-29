#include<iostream>

int main()
{
    // ITERATIVE APPROACH
    int n,temp;
    int first = 0,second = 1;
    std::cout<<"Enter the till where you need series";
    std::cin>>n;

    if(n == 1)
    {
        std::cout<<first;
    }
    else if(n == 2)
    {
        std::cout<<first<<" "<<second;
    }
    else
    {
        std::cout<<first<<" "<<second<<" ";
        for(int i = 3;i<=n;++i)
        {
            temp = first + second;
            std::cout<<temp<<" ";
            first = second;
            second = temp;
        }
    }

    // HERE , we are using iterative approach so it is of O(N) approach

    return 0;
}