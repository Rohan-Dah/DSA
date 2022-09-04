#include<iostream>
using namespace std;

int sum(int a[], int size)
{
    int ans = 0;
    cout << sizeof(a) << endl; 
    for(int i = 0; i<size; i++)
    {
        ans += a[i];
    }
    return ans;
    /*
    As we know we are passing actually the pointer in the form of array, so even if we write *a instead of a[], it will work. Size means we need to move these many memorh blocks ahead (4 in case of int array) Now if we try to print sizeof(a) in the fucnction it will return 8 becoz a memory address is of 8 bytes while if we do sizeof(a) in main function it will return the actual space allocated for the array which in this case is 40.

    Now even if we try passing a+2 in main function it will work and that means we are passing this part of the array in the fucntion with the help of pointer reference. 
    */
}

int main()
{
    int a[5] = {1,2,3,4,5};
    cout << sizeof(a) << endl;
    sum(a+2, 10);
    
return 0;
}