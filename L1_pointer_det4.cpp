#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;
    // Both the above have same thing as the output
    a[0] = 5;
    a[1] = 10;
    cout << *a << endl;
    // Here we are treating a as a pointer.
    cout << *(a+1) << endl;
    // This works exactly as a[0], a[1] or in general a[i]. This is what it actually means. pointer referencing to a + i. a has the memory location of first index element.

return 0;
}