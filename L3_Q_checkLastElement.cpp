//Checking last element in the array

#include<iostream>
using namespace std;

int lastElement(int a[], int size, int x)
{
    if(size == 0 && a[size] != x)
    {
        return -1;
    }

    if(a[size] == x)
    {
        return size;
    }

    return lastElement(a, size-1, x);
}

/*
int lastElementReverse(int a[], int size, int x)
{
    if(size == 0)
    {
        return -1;
    }

    if(a[0] == x)
    {
        return 0;
    }

    else{
        int ans = lastElementReverse(a-1, size-1, x);
        if(ans = -1)
        {
            return -1;
        }
        else{
            return ans + 1;
        }
    }
}
*/

int main()
{
    cout << "Your array is: " << endl;
    cout << "Enter size of the array: " << endl;
    int size;
    cin >> size;
    int a[size] = {2, 1, 1, 3, 4};
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nEnter the element to check last index of: " << endl;
    int x;
    cin >> x;
    cout << lastElement(a, size-1, x) << endl;
    // cout << lastElementReverse(a+4, size-1, x) << endl;
return 0;
}