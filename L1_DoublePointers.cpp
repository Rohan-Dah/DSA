#include<iostream>
using namespace std;

int main()
{
    
    int i = 10;
    int *p = &i;
    cout << i << endl; //Variable
    cout << *p << endl; //Dereferencing

    int ** p2 = &p; //Double pointer stores the address of pointer that will be holding the address of other variable.
    cout << p2 << endl; //Printing p2 ie the address of p.
    cout << &p << endl; //Pringing address of p So above two will be the same

    cout << i << endl; //Printing the value of i.
    cout << *p << endl; //Dereferencing to print the value of variable
    cout << **p2 << endl; //Dereferencing to get the value of pointer variable. Here we will get what is stored in p ie the address of i. Now we are again dereferencing to print what is there in the address and that is the value of the variable so 15, 16,17 will have the same output


    
return 0;
}