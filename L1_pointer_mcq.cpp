#include<iostream>
using namespace std;

int main()
{
    // int a[6] = {1, 2, 3};
    // int *b = a;
    // cout << b[2];

    int a[] = {1, 2, 3, 4};
    int *p = a++;
    cout << *p << endl;
return 0;
}