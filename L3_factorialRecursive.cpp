//Tryign to print factorial of a number using recursion

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int ans = n * fact(n - 1);
    return ans;
}

int main()
{
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;
    
return 0;
}

/*
Recursion is a function calling itself. This means it will have a smaller question in that function and after you get answer to that that function will again be called with that different value. This all relates down to a call stack. Main is the first function to be in the call stack and the last will the currently called function.
*/