#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{

    string str = "   Good morning   all of you ";

    stringstream ss(str); // string stream is used in tokenization of string (extraction of string)
    string buffer;

    while(ss >> buffer)
    {
        cout<<buffer<<endl;
    }

    //******************************************************************/
        // unlike in normal C in cpp we have a separate class defined string and for string tokenizaion we have sstream class defined in sstream library

        string sa("abdcdcdc"); // one way to create string using constructor 

        string str = "efefe"; // second way
    
        char ch[] = "frfrfrf"; // this is the C style way here last character will be null (null-terminated)
    
        cout<<str<<endl;
    
        cout<<sa;
    
        // methods
        cout<<"String length is "<<str.length()<<endl;
        // str.find(substr) will return a npos(no position) if string is not find string::npos so make a check
        cout<<"to find substring in the given string you can use str.find(substring) "<<str.find("fe")<<endl;
        cout<<"to find last occurence of substring in the given string you can use str.find(substring) "<<str.rfind("fe")<<endl; 
        // cout<<sa.clear()<<endl;
        cout<<"Delete characters from index 5 and delete only 2 characters "<<sa.erase(5,2)<<endl;
        cout<<"Delete characters from index 5 and delete all characters till end"<<sa.erase(5)<<endl;
        cout<<"generates a new string from starIdx se specified length tk "<<sa.substr(2,5)<<endl;
        // s.replace(),s.push_back(),s.pop_back(),s.find(),s.erase(startIdx,endIdx),s.clear(),s.length(),s.substr(startIdx,length of substr to be extracted),s.rfind().s.clear(),s.at(index)

    return 0;
}