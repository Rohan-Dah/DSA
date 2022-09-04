//Printing numbers from 1 to n

#include<iostream>
using namespace std;

void print(int n)
{
    if(n == 0)
    {
        return;
    }
    else{
        print(n-1);
    }

    cout << n << " ";
}

int main()
{
    cout << "Enter the limit: " << endl;
    int n;
    cin >> n;

    print(n);
return 0;
}