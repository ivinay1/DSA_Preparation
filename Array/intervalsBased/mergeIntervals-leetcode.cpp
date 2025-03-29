class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            
            int n = intervals.size();
    
            vector<vector<int>> result;
    
            if(n == 1) return intervals;
    
            sort(intervals.begin(),intervals.end());
    
            for(int i = 0;i<n;++i)
            {
                // non overlapping inervals
                if(result.size() == 0 || result.back()[1] < intervals[i][0])
                {
                    result.push_back(intervals[i]);
                }
                else  // overlapping intervals
                {
                    vector<int> lastResElem = result.back();
                    result.pop_back();
                    result.push_back({min(lastResElem[0],intervals[i][0]),max(lastResElem[1],intervals[i][1])});
                }
            }
    
            return result;
        }
    };

// ALGO 
// 1.) sort the given intervals array according to first element
// 2.) now check for overlapp or not by using overlapp condition
// 3.) now if overlapp do not happens or result vectro is empty then push it in result 
// 4.)if overlapp occurs then merge the intervals and push them in answer