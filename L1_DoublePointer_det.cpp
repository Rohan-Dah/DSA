#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    // cout << a << endl;
    // cout << *p << endl;

    // (*p)++;
    // cout << a << endl;
    // cout << *p << endl;

    int ** q = &p;
    cout << q << endl; // ADress of p pointer in the memory
    cout << *q << endl; //Adress of the variable of the main value
    // cout << p << endl; //Same as above statement
    cout << **q << endl; // Dereferencing the deferencing and printing out the acual value.

    (*q)++;
    cout << *q << endl;
    cout<< a << endl;
    
return 0;
}

/*
Why dont we have a datatype as pointer p rather than having this complicated syntax int *p?  
---> This is becoz while deferencing we will get to know kaunse address pe jana hai but kitne bytes read karne hai ye nahi pata hoga. For instance if it is if integer type then we have to read 4 bytes and give numerical value as output but if it is a char we need to read 1 byte and return the corresponding characetr that is linked with that ascii value.  
*/