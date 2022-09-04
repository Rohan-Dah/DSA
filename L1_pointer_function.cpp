#include<iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
    /*
    What happens in this fucntion is a pointer variable that contains some address is being passed in this function by the main. Now in the cout statement we are dereferencing the address to print the value that is present at that memory address, so it will print exactly that ie 10.
    */
}

void incrementPointer(int *p)
{
    p = p + 1;
    cout << "Func: " << p << endl;
    /*
    What happens in this function is we are passing a pointer through the main function. Then we are incrementing the value of that by 1 which means by 4 bytes and that is how pointer functions becoz an integer variable is of size 4 and if we are incrementing the pointer we are meaning to move the memory address to the next allocated space in the memory. This is similar as a[0] and 
    a[1].

    Then we are printing the address after the increment. We will have an incremented value while it is in the functoin. This means a copy of that memory address is being passed in this function. That means it dosent affect the address that is stored in the pointer variable in the main function. Usne uske chit mein changes kiye toh mere chit mein farak nhi ayega. This is same as pass by value in integers and characters.
    */
}

void printIncrementedValue(int *p)
{
    (*p)++;
    /*
    What happens in this function we are passing a pointer with a copy of address that is present in the main (in this case). What we are doing is we are changing the value that is present at that address. Matlab main bhi aur ye function bhi ek hi address ko point kar raha and if we made the changes in the value of that address dona mein changes reflect honge na bhale hi we have passed by value the address (copied the address and keeping it intact in the main function bhale hi ye function mein address change kar de).
    */
}

int main()
{
    int i = 10;
    int* p = &i;
    // print(p);

    // cout << "Main: " << p << endl;
    // incrementPointer(p);
    // cout << "Main: " << p << endl;

    cout << *p << endl;
    printIncrementedValue(p);
    cout << *p << endl;



    
return 0;
}