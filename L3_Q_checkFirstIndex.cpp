//Checking first index of a number...

#include<iostream>
using namespace std;

int firstIndex(int a[], int size, int x)
{
    if(size == 0)
    {
        return -1;
    }

    if(a[0] == x)
    {
        return 0;
    }

    else
    {
        int ans = firstIndex(a+1, size-1, x);
        if(ans == -1)
        {
            return -1;
        }
        else{
            return ans+1;
        }
    }
}

int main()
{
    cout << "Your array is: " << endl;
    int a[5] = {2, 1, 1, 3, 4};
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nEnter the element to check: " << endl;
    int x;
    cin >> x;
    cout << firstIndex(a, 5, x);
return 0;
}