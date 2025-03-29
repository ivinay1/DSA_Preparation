#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int>ans;
    int target = 9;
    vector<int>nums = {2,7,11,12};

    unordered_map<int,int>hash_map;

    for(int i = 0;i<nums.size();++i)
    {
        hash_map[nums[i]]++;
    }
    
    for(int i = 0;i<nums.size();++i)
    {
        int complement = target-nums[i];
        if(hash_map[complement]>=1 && complement != nums[i])
        {
            ans.push_back(i);
        }
        else if(hash_map[complement]>1 && complement == nums[i])
        {
            ans.push_back(i);
        }
    }

    return 0;

}