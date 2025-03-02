#include<iostream>
#include<vector>

// typedef std::vector<std::pair<std::string,int>> pairlist_t;
typedef int number_t;
using text_t = std::string;

int main()
{
    using std::cout;

    number_t age = 14;

    // typedef = reserved keyword used to create an additional name(alias) for another type.
    //          new identifier for exisiting type
    //          Helps with readibility and reduces typos
    //          Replaced with 'using' ( work better with templates)

    text_t name = "raman";
    cout<<name<<"\n";

    return 0;
}