#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main()
{
    // keys must be unique in map
    unordered_map <int,string> umap;
    umap[1] = "vinay";
    umap[2] = "Rohan";
    umap[3] = "abhisekh";

    for(unordered_map <int,string>::iterator it = umap.begin();it!= umap.end();++it)
    {
        cout<<(*it).first <<" "<<(*it).second<<'\n';
        cout<<it -> first<< " "<< it->second<<'\n';
    }

    for(auto elem : umap)
    {
        cout<<elem.first<<" "<<elem.second<<'\n';
    }

    umap.insert({5,"rana"});
    umap.insert(make_pair(6,"america"));
    umap.clear();
    
    if(umap.find(1) == umap.end())
    {
        cout<<"element not found"<<'\n';
    }
    else
    {
        umap.erase(umap.find(1));
        umap.erase(3);
    }

    cout<<"Is map empty "<<umap.empty()<<'\n';

    if(umap.count(2))
    {
        cout<<"element is present"<<'\n';
    }
    else
    {
        cout<<"element is not present"<<'\n';
    }

    map<string,int> orderMap;
    orderMap.insert({"abra",1});
    orderMap.insert({"reab",2});
    orderMap.insert({"rewq",3});

    for(auto &elem : orderMap)
    {
        cout<<elem.first<<" "<<elem.second<<'\n';
    }


    return 0;
}