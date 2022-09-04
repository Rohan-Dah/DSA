#include<iostream>
using namespace std;

inline int max(int a, int b)
{
    return (a > b) ? a : b; 
}

int main()
{
    cout << "Enter two numbers: " << endl;
    int a, b;
    cin >> a >> b;
    int c = max(a, b);
    cout << c<< endl;

    cout << "Enter two numbers: " << endl;
    int g, h;
    int z = max(g, h);
    cout << z << endl;


return 0;
}

/*
What is happening here is baar baar max function is being called. This means yaha firstly hume do args pehle function mein pass karne honge and then function apna kaam karega fir agar return karna ho toh karega like in this case karna hai.. Ye baar baar karna turns out to be a combersome task even for the compiler. So ye cheej thoda simple karne we use inline keyword. What inline keyword does is it brings the function body to where the function is called so we dont have to do passign the variable and getting returned with teh value shit. But we cant have a long inline function. A function only becomes inline when body of teh function small, eitehr 1 liner or 2 liner not more than that. we can use the keyword but compiler wont accept it. It wont throw error but it dosnt consider the function as inline.
*/