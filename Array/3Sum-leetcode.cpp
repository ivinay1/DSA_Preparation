class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            
            vector<vector<int>> result;
            int n = nums.size();
            sort(nums.begin(),nums.end());
    
            for(int i = 0;i<n;++i)
            {
                // To avoid repetition on currElem
                if( i> 0 && nums[i] == nums[i-1]) continue;
    
                int currElem = nums[i];
                int left = i+1;
                int right = n-1;
    
                while(left < right)
                {
                    int currSum = nums[left] + nums[right] + currElem;
    
                    if(currSum == 0)
                    {
                        result.push_back({currElem,nums[left],nums[right]});
    
                        while(left <right && nums[left] == nums[left+1])
                        {
                            left++;
                        }   
    
                        while(left <right && nums[right] == nums[right-1])
                        {
                            right--;
                        }
                        left++;
                        right--;
                    }
    
                    else if(currSum > 0)
                    {
                        right--;
                    }
    
                    else
                    {
                        left++;
                    }
                }
    
            }
    
            return result;
        }
    };

//TODO:-  Second approach is using HashSet and iteration ( thirdElem = -(arr[i]+arr[j]))
// TC:- O(n^2) 
// SC:- O(n)

class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
    
            set<vector<int>> resultSet;   
            vector<vector<int>> result;     
            int n = nums.size();
    
            for(int i = 0;i<n-2;++i)
            {
                unordered_set<int> u_set;
                for(int j = i+1;j<n;++j)
                {
                    int thirdElem = -(nums[i]+nums[j]);
    
                    if(u_set.find(thirdElem) != u_set.end())
                    {
                        vector<int>temp = {nums[i],nums[j],thirdElem};
                        sort(temp.begin(),temp.end());
                        resultSet.insert(temp);
                    }
                    else
                    {
                        // it can be potencial second element
                        u_set.insert(nums[j]);
                    }
                }
            }
    
            for(auto elem: resultSet)
            {
                result.push_back(elem);
            }
    
            return result;
        }
    };