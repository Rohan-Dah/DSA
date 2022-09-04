//Program to check whether the array is sorted or not...

#include<iostream>
using namespace std;

bool isSorted(int a[], int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    } //base case

    if(a[0] > a[1])
    {
        return false;
    } //False condition
    bool is_Sorted = isSorted(a + 1, size - 1); //Recursive call
    return is_Sorted;
}

int main()
{
    cout << "Array is: " << endl;
    int a[5] = {2, 3, 4, 7, 6};
    cout << isSorted(a, 5) << endl;

return 0;
}

