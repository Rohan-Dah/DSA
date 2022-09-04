//Find sum of array using recursion

#include<iostream>
using namespace std;

int sum(int a[], int size)
{
    if(size == 1)
    {
        return a[0];
    }

    a[1] = a[0] + a[1];
    sum(a + 1, size - 1);
}

int main()
{
    cout << "Array is: " << endl;
    int a[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << sum(a, 5) << endl;
return 0;
}