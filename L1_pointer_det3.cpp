#include<iostream>
using namespace std;

int main()
{
    int i = 10; 
    int *ptr = &i;
    cout << ptr << endl;
    ptr = ptr + 2;
    cout << ptr << endl;
    /*here what is happening is we are printing the address and if we try to increment the address compiler assumes it as memory block, this means as integer has a size of 4 bytes and if we do i + 1 we are moving a block ahead in the memory address.
    Same will be the case with char, double and float. The address will be increased by 1 byte, 8 bytes and 4 bytes respectively.
    */

   

return 0;
}