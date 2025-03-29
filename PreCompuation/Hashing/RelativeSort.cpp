class Solution {
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
            
            unordered_map<int,int> umap;
            vector<int>result;
    
            for(auto &elem : arr1)
            {
                umap[elem]++;
            }
    
            for(auto &elem : arr2)
            {
                int occur = umap[elem];
                for(int i = 1;i<=occur;++i)
                {
                    result.push_back(elem);
                }
                umap.erase(elem);
            }
    
            
           if(umap.size())
           {
             vector<int>temp;
             for(auto &elemOccur: umap)
             {
                int elem = elemOccur.first;
                int occur = elemOccur.second;
                temp.push_back(elem);
             }
             sort(temp.begin(),temp.end()); // sorting remaining elements in ascending order
    
            for(auto &elemTemp : temp)
            {
                int elemTempOccur = umap[elemTemp];
                for(int i = 1;i<=elemTempOccur;++i)
                {
                    result.push_back(elemTemp);
                }
    
            }
    
           }
    
        return result;
        }
    };