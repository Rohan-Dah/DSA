#include<iostream>
using namespace std;

void increment(int& n) 
{
    n++;
}

//This is passing the variable by reference into the function. I we dont use ampersand that means we are sharing a copy of that value into that function. Now if we use ampersand before passing the variable we mean to say the variable that is being passed and the variable that is being recieved the copy of share the same memory space so the changes made in either will be refelected. This means there are two ways to reach a particular memory block, through main ka i and increment ka n

int main()
{
    int i = 10;
    increment(i);
    cout << i << endl;

return 0;
}