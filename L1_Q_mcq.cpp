#include <iostream>
using namespace std;

int main()
{
    /*
    int *ptr = 0;
    int a = 10;
    *ptr = a;
    */

    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;

    // cout << *ptr << endl;
    return 0;
}