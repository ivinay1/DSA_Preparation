#include<iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{
    int x = 0;

    std::cout<<first::x<<"\n";
    std::cout<<second::x<<"\n";
    std::cout<<x<<"\n";

    //Namespaces = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
    //              A namespace allows for identical named entites as long as the namespaces are different

}