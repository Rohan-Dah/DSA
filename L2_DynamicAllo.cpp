#include<iostream>
using namespace std;

void createArray(int *a, int n)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}

void displayArray(int *a, int n)
{
    cout << "\nYour elements are: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}

int main()
{
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;
    int *a = new int[n];
    createArray(a, n);
    displayArray(a, n);
return 0;
}

/*
We have got two types of memories in which we can allocate memory --> stack memory and heap memory.
Now all the memeory that we use is static memeory which is quite limited that means agar you are assigning an array of size 20000 it might not be possible ni some cases. This can be done when we use heap memory. heap is a much bigger section in memory in which you can assign variable and even assign value in the array at the run time. 
*/