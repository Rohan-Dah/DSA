#include<iostream>
using namespace std;

int main()
{
    /*
    int i[] = {1,2,3};
    char b[] = "abc";

    cout << i << endl;
    cout << b << endl;

    // The case of implimentation of charcter arrays is different as compared to integer arrays. Like in the case of integer array linr 9 will mean address of i[0] and it should print the same but if same thing is applied for character array it prints the entire string. Thats just how cout works in case of both char array and int arrays.
    
    int *d = &i[0];
    char *e = &b[0];

    cout << d << endl;
    cout << e << endl;

    // The same will be the output for the above cases as well even when we will be using the pointers.
    */

   char a = 'a';
   char *p = &a;
   cout << p << endl;
//    If this is done then it will print till the characters stored in the char variable and along with that explore other address till it will get to null.

return 0;
}