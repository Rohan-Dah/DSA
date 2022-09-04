#include<iostream>
using namespace std;

int fact(int n)
{
    int i = 1;
    int ans = 1;
    while(i <= n)
    {
        ans = ans * i;
        i++;
    }
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