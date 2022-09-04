#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout << a << endl;
    cout << &a << endl;
    int *p = &a[0];
    cout << p << endl;

    //Ye teeno same hi cheej print kar rahe honge. line 7 is soring address of a[0] as per the rule of array and its pointer like calling. Then we have in the line 8 address of a which is then printed as the same. Then in the line 10 we have pointer p which is storoing the address of a[0] which is one and the same.

    /*
    Now what is happening in the system is an address for a is being assigned which is then stored in the system and correspondingly in the symbol table and so is the case with the address of the pointer but you can store the address of something in that pointer variable..

    matalab a[10] agar hai and hum cout << a karen toh a[0] ka address print karega
    and if we do int *p = &a[0] then cout << p, ye bhi karen toh a[0] ka address print karega.
    what makes both of them diffrent is a cant be reassigned but p can be, this means we cant do a = a + 2 if this is an array but certainly we can do p = a + 2 becoz that is what the pointer variable is meant to be.
    */
return 0;
}