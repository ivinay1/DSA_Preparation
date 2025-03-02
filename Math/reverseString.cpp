#include<iostream>
#include<string>
#include<algorithm>

int main()
{
    std::string str = "vinay";

    int left = 0;
    int right = str.size()-1;

    while(left < right)
    {
        std::swap(str[left],str[right]);
        left++;
        right--;
    }

    std::string s = "12344";
    std::string st = "abc";
    std::cout<<(s[s.size() -1] - '0')*2<<'\n';
    std::cout<<(char)(st[0]-'a'+'A')<<'\n';

    return 0;
}