//Check whether the number is present in the array or not

#include<iostream>
using namespace std;

bool checkNumber(int a[], int size, int x)
{
    if(size == 1 && a[0] != x)
    {
        return false;
    }

    if(a[0] == x)
    {
        return true;
    }
    bool smallCheck = checkNumber(a + 1, size -1, x);
    return smallCheck;
}

int main()
{
    cout << "Array is: " << endl;
    int a[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << checkNumber(a, 5, 4) << endl;

return 0;
}