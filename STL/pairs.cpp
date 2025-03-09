#include<iostream>
#include <utility>
#include<string>

int main()
{

    std::pair<int,char> p = {1,'d'}; // inititalising a pair
    std::cout<<p.first<<" "<<p.second;

    std::pair<int,char> p1 = std::make_pair(2,'r'); // using make_pair
    std::cout<<p1.first<<" "<<p1.second;

    std::pair<int,char>&p2 = p1; // referencing a pair
    std::cout<<p2.first<<" "<<p2.second;

    std::pair<int,int> coordinate[4] = {{1,2},{3,4},{5,6},{7,8}}; // an array of pairs

    for(auto &p : coordinate)
    {
        std::cout<<p.first<<" "<<p.second<<'\n';
    }

    swap(coordinate[1],coordinate[3]); //swapping pairs

  // we can use typedef pair<int,int> pair_t and then use directly pair_t instead of pair<int,int>

    return 0;
}