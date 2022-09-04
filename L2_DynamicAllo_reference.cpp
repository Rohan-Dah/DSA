#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    int& j = i; //j here is a reference variable tthat means both i and j are pointing tp the same memory location and changes made in either will be reflected in the changes in the memory block.
    i++;
    cout << j << endl;
    int k = 100;
    j = k;
    cout << i << endl; //Here we are storing the vlaue of k in the memory block of i and j.
    //A thing to note is we cant segregate the steps into two for declaring and initializing like we can do in initialising and declaring for integers.
return 0;
}