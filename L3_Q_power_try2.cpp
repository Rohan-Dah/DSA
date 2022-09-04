//Find x raised to n using recursion

#include<iostream>
using namespace std;

int power(int x, int n)
{
    if(n == 1)
    {
        return x;
    }
    return x*(power(x,n-1));
}

int main()
{
    cout << "Enter x and n: " << endl;
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;

return 0;
}