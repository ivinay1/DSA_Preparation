#include<iostream>
#include<string>

using namespace std;

bool checkPaindrome(string &str,int left,int right)
{
    if(left >= right) return true;

    if(str[left] != str[right]) return false;

    checkPaindrome(str,left+1,right-1);
}

int main()
{

    string str = "NITIN";
    cout<<checkPaindrome(str,0,str.length()-1)<<'\n';

    return 0;
}