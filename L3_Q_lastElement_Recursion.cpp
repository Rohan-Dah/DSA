//Finding last index of an element usign recursion...

#include<iostream>
using namespace std;

int lastIndex(int a[], int size, int x)
{
    int ans;
    if(size == 0 && a[0] != x)
    {
        return -1;
    }

    if(a[0] == x)
    {
        ans = 0;
    }

    else{
        ans = lastIndex(a+1, size-1, x);
        if(ans == -1)
        {
            return -1;
        }
        else{
            ans = ans + 1;
            return ans;
        }
    }
}

int main()
{
    cout << "Your array is: " << endl;
    int a[4] = {9, 8, 10, 8};
    for(int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nEnter the element you want to find: " << endl;
    int x;
    cin >> x;

    cout << lastIndex(a, 4, x) << endl;
return 0;
}