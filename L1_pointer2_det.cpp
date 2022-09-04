#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    int *p = &i;
    cout << i << endl;
    cout << *p << endl;
    // Pointing to the same memory location. If any way the number in that lcoation is changed it must be reflected in both.

    i++;

    cout << i << endl;
    cout << *p << endl;

    int *q = p;
    // q is an integer pointer which is storing what is there in pointer variable p ie the memory location of variable i.

    cout << *q << endl;
    cout << *p << endl;
    cout << i << endl;
    // *p, *q and i all these 3 are pointing to just one thing, the value inside the variable i.
    // this means *p refers to the value that is present at the location. 
    // p refers to the location and &p refers to the address of the pointer variable.
return 0;
}