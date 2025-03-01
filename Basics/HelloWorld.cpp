#include<iostream>

int main()
{
    std::cout<<"Hello World"<<'\n';
    std::cout<<"Hello World"<<std::endl;

    // This is single line comment

    /*
    This is multiple line comment
    */

    // "endl" and "\n" are both used to put the cursor to the next line but endl flushes outs the output (memory) buffer while "\n" do not does such thing that's why "\n" is preferred over "endl"

    // variable names are mapped to their corresponding memory addresses in a data structure called a symbol table (sometimes referred to as a "variable table") within the compiler or interpreter during the compilation/execution process; essentially, this table stores the association between the human-readable variable name and its actual memory location where the data is stored. 

    return 0;
}