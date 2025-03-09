#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

// always prefer to pass reference as copying is O(n) operation
void printVec(vector<int>& vec)
{
    for(int i = 0;i<vec.size();++i)
    {
        cout<<vec[i]<<" ";
    }
}

// printing vector of pair
void printPairVec(vector <pair<int,int>>&v){
    cout<<"size of vector is "<<v.size();
   {
        for(auto &p: v)
        {
            cout<<p.first<<" "<<p.second;
        }
   
}

int main()
{
    // vectors are dynamic arrays unline arrays they are resizable

    vector<int>v; // empty vector

    vector<int> v1(5,9); // vector of size 5 with each element's value as '9'

    // iterating vector --> vectors can also be accessed using indexes and range based loops
    for(auto &p: v1)
    {
        cout<<p;
    }

    // we can have a vector of any type set,pair,map,vector of vector
    vector<pair<int,int>> v2 = {{1,2},{4,5},{7,8}};

    for(auto &p: v2)
    {
        cout<<p.first<<" "<<p.second<<'\n';
    }

    // adding and removing elements from vector
    v2.push_back({8,9});
    v2.pop_back();
    cout<<v2.size()<<'\n';

    // Important methods
    cout<<v2.empty()<<'\n';
    cout<<v2.front()<<'\n';  // it will return the element at first position do nothing to existing array
    cout<<v2.back()<<'\n';  // it will return the element at last position do nothing to existing array
    cout<<v2.clear()<<'\n';

    // sorting a vector
    sort(v2.begin(),v2.end()); // in asceding order
    sort(v2.rbegin(),v2.rend()); // in desceding order

    //NOTE:-  we can also use comparator function for custom sorting

    // 2D Vectors(matrix representations)
    vector<vector<int>>matrix (3,vector<int>(4,5));  // 3 x 4 matrix having each element value '5'

    for(auto &row : matrix)
    {
        for(auto &val : row)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }

    //NOTE:-  vectors of pairs are commonly used in graphs and sorting problems


    // 

    printVec(v); // passing vector as a parameter

    vector<int>v2 = v;  // making a copy of v here, v2 and v are both diff after copying making changes to one does not affect other

    vector<int>v3 = v; // here v3 is reference of v so changes made to v will affect v3

    // array of vector (array whose number of rows are fixed but columns not)
    vector<int> arr[4];

    for(int i =0;i<4;++i)
    {
        int col_size;
        cout<<"Enter the column size";
        cin>>col_size;

        for(int i = 0;i<col_size;++i)
        {
            int x;
            cout<<"Enter the value";
            cin>>x;
            arr[i].push_back(x);
        }
    }

    // vector of vector (variable rows, variable columns)
    vector<vector<int>> v4;

    int row_size;
    cout<<"Enter the number of rows";
    cin>>row_size;

    for(int i =0;i<row_size;++i)
    {
        int col_size;
        cout<<"Enter the column size";
        cin>>col_size;

        for(int i = 0;i<col_size;++i)
        {
            int x;
            cout<<"Enter the element";
            cin>>x;
            v4[i].push_back(x);
        }
    }

    

    return 0;
}
