//Counting total digits in a number

#include<iostream>
using namespace std;

int count(int n)
{
    if(n < 10)
    {
        return 1;
    }
    return 1 + count(n/10);
}

int main()
{
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    cout << count(n) << endl;

return 0;
}