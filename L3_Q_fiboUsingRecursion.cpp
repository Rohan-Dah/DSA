//Printing Fibnacci number using recursion

#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n < 2) //base condition
    {
        return n;
    }

    return (fibo(n-1) + fibo(n-2));
}

int main()
{
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;

    cout << fibo(n) << endl;

return 0;
}