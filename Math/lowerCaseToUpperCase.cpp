#include<iostream>
#include<string>

bool isLowerCase(std::string &word)
{
    for(auto letter: word)
    {
        if(letter >='a' && letter <= 'z')
        {
            return true;
        }
    }
    return false;
}

std::string toConvertUpperCase(std::string &word)
{
    std::string upperWord;
    for(auto letter: word)
    {
        if(letter >='a' && letter <='z')
        {
            upperWord += (char)(letter-'a'+'A');
        }
        else
        {
            upperWord += letter;
        }
    }
    return upperWord;
}

int main()
{
    std::string word;
    std::cout<<"Enter the word";
    std::cin>>word;

    (isLowerCase(word))?std::cout<<toConvertUpperCase(word):std::cout<<word;

    return 0;
}