class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            
            vector<vector<int>> result;
            int n = nums.size();
            sort(nums.begin(),nums.end());
    
            for(int i = 0;i<n-3;++i)
            {
                // to avoid repetition at first element
                if(i>0 && nums[i] == nums[i-1]) continue;
    
                for(int j = i+1;j<n-2;++j)
                {
                    // to avoid repetition at second element
                    if(j>i+1 && nums[j] == nums[j-1]) continue;
    
                    int left = j+1;
                    int right = n-1;
                    while(left < right)
                    {
                        long long int sum = nums[i] + 0LL+ nums[j] +0LL+ nums[left] +0LL+ nums[right];
                        if(sum == target)
                        {
                            result.push_back({nums[i],nums[j],nums[left],nums[right]});
    
                            while(left < right && nums[left] == nums[left+1])
                            {
                                left++;
                            }
    
                            while(left < right && nums[right] == nums[right-1])
                            {
                                right--;
                            }
                            left++;
                            right--;
                        }
                        else if(sum > target)
                        {
                            right--;
                        }
                        else
                        {
                            left++;
                        }
                    }
                }
            }
    
            return result;
        }
    };