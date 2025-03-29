#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<map>
#include<unordered_map>


using namespace std;

int main()
{
    // BRUTE FORCE:- iterate over first array and take one by one its elements and then check linearly if array is not sorted if it is sorted then binary search if it is present then good to go and mark this element as "-1" so that it wont't match in future

    // BETTER :- sort the arrays then and then use two pointer technique and comapre and increment the pointers till any one thm size breaches
    
    // OPTIMAL:- use hashmap map arr1 and arr2 in a map now pick keys from a arr1's hashmap and then check if the key is present in hashmap of arr2 if yes then add it in answer

    unordered_set<int>uset;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2}; 

    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    int i = 0,j=0;

    while(i<nums1.size() && j<nums2.size())
    {
        if(nums1[i] == nums2[j])
        {
            uset.insert(nums1[i]);
        }
        else if(nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

//.............................................HASHMAP...............................................................

    map<int,int>nums1Map;
    unordered_map<int,int>nums2Map;
    vector<int>result;

    for(int i = 0;i<nums1.size();++i)
    {
        nums1Map[nums1[i]]++;
    }

    for(int j = 0;j<nums2.size();++j)
    {
        nums2Map[nums2[i]]++;
    }

    for(auto elem : nums1Map)
    {
        if(nums2Map.find(elem.first) != nums2Map.end())
        {
            result.push_back(elem.first);
        }
    }

//................................................SET.........................................................
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;

    for (int num : nums2) {
        if (set1.count(num)) {
            result.insert(num);
        }
    }

    
    return 0;
}