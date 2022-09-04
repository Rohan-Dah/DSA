#include<iostream>
using namespace std;

int main()
{
    int i = 65;
    char c = i;
    int *p = &i;
    char *pc = (char*)p; //(char*) means we are typecasting the value in the variable p to the type char* wihch is the character pointer. This is explicit typecasting, we cant do it implicitly without using this technique relying completely on compiler.

    cout << p << endl; //Printing the address
    cout << pc << endl; //Printing the value in the address coz thats how char pointers work
    cout << *p << endl; //Dereferencing to get what is present in the address which is stored at p.
    cout << *pc << endl; //Deferencing to get what is present at the address and since it is of char type it is returning A.
    cout << *(pc + 1) << endl; 
    cout << *(pc + 2) << endl;
    cout << *(pc + 3) << endl;

    /*We have significance of line 15, 16, 17. If we look closely how integers will be stored in the system it will be like 
    __ __ __ __  ---> The four underscores represents 4 bytes by which the data is saved. And the data present is 65 which we think must be the least significant so will be stored in right-most bit. And if we typecast the data as character then the first bit be read right!? But it is nto the case. We follow the small endian system of bit storage according to whicch 65 will be present in the first byte compartment itself adn sign bit will be present as 1st bit at 4th byte compartment. Big endian system stores the bytes as it is like sign bit will be stored at 1st location at first byte compartment and the actual data that is 65 in the last byte compartment*/

return 0;
}