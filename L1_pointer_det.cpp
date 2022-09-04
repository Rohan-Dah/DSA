#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    //What exactly happens here is 10 is allocated to a address lets say 700 that has 4 bytes accociated with it. That means the value 10 goes to 700 memory location in the main memory

    cout <<  "MA of int 1: " << &i << endl;
    //the moment a varaible is initialize a symbol table is generated. All of this happens in compile time itself. 
    // The might look like:
    // i   700
    // j   800
    // y   850
    // i is stored at memory location 700 and so on. In the real sense memory address is a hexadecimal number that includes characters from a to f as well. 

    int *pi = &i;
    cout << pi << endl;
    // this is the pointer variable. *pi is the pointer variable. that means it stores the memory address of the integer or any data type varible. Here it is storing memory address of i.

    cout << "Using address (*p): " << *pi << endl;
    // YOu can access that particular memory location by using the method as well. This means you are pointing to return the value that is present at this memory address.

    char a;
    char* pa = &a;
    cout << "MA of char 1: " << pa << endl;

    double d;
    double *pd = &d;
    cout << "MA of double 1: " << pd << endl;

    // There are two ways to reach a particular memory location. One is to use pointer as they will storing directly the memory address of the destination value, and other is usign variables, if used we need to get to the address by using symbol table. 

    
return 0;
}