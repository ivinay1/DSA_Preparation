#include<iostream>
#include<unordered_set>
#include<set>

using namespace std;

int main()
{

    unordered_set<string> s;
    s.insert("vinay");
    s.insert("rohan");
    s.insert("abhisek");
    s.insert("abhisek");

    cout<<s.size()<<'\n';

    // s.clear();
    cout<<s.size()<<'\n';

    // traversing set
    for(auto it = s.begin(); it!= s.end();it++)
    {
        cout<<(*it)<<'\n';
    }

    if(s.find("vinay") == s.end())
    {
        cout<<"element is not found"<<'\n';
    }
    else
    {
        s.erase(s.find("vinay"));
        s.erase("abhisek");
    }


    if(s.count("vinaay"))
    {
        cout<<"vinaay is present in set"<<'\n';
    }
    else
    {
        cout<<"vinaay is not present in set"<<'\n';
    }


    set<int> st;
    st.insert(8);
    st.insert(10);
    st.insert(5);
    st.insert(7);

    for(auto it = st.begin();it!=st.end();++it)
    {
        cout<<(*it)<<'\n';
    }

    for(auto elem : st)
    {
        cout<<elem<<'\n';
    }

    // NOTE :- set.insert(value) return a pair where first represents iterator to the value and the second represents the status of insertion if it is inserted then it returns true if not then false (due to previously present)

    return 0;
}