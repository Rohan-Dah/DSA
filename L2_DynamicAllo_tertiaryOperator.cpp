#include<iostream>
using namespace std;

int main()
{
    //We want to return max among two numbers 

    cout << "Enter two nummbers: " << endl;
    int a, b, c;
    cin >> a >> b;
    if(a > b)
    {
        c = a;
    }
    else{
        c = b;
    }
    cout << c << endl;

    //Now rather than doing these many things we can shorten up things

    int l = (a > b) ? a : b;
    cout << l << endl;
    //What statement 22 means is if a is greater than b then store a in l or if not then store b in l. '?' is the ternary operator. That takes three args condition, if and else
    
return 0;
}