#include<iostream>
#include<algorithm>

void printFirst(int arr[])
{
    std::cout<<'first element '<<arr[0]<<'\n';
}

void printFirstMatrix(int a[][4])
{
    std::cout<<'first element of matrix '<<a[0][0]<<'\n';
}


int main()
{
    // An array is a fixed-size collection of elements of the same data type, stored in contiguous memory.
    // Array used to reduce multi variables
    // It is preferable to locally declare array of size 10 power 5 at max you can declare globally 

    int arr[] = {1,2,3,4,5,6};

    std::cout<<"size of array is "<<sizeof(arr)/sizeof(arr[0])<<'\n';

    arr[1] = 9; // array are mutable

    // traversing the array
    for(int i = 0;i<6;++i)
    {
        std::cout<<arr[i]<<" ";
    }

    // using range based loops
    for(auto elem : arr)
    {
        std::cout<<elem<<" ";
    }

    // Multi-dimensional array
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    for(int row = 0;row<3;++row)
    {
        for(int col = 0;col<4;++col)
        {
            std::cout<<matrix[row][col];
        }
    }

    //Pointers and Arrays
    int *ptr = arr; // it will store address of first element
    std::cout<<*ptr<<'\n';
    std::cout<<*(ptr+1)<<'\n';

    // To sort an array
    int n = sizeof(arr)/sizeof(arr[0]);
    std::sort(arr,arr+n);





    return 0;
}