//Print hello world 5 times recursively... 

#include<iostream>
using namespace std;

void print(int i)
{
    if(i == 5)
    {
        cout << "Hello World " << endl;
        return;
    }

    cout << "Hello World " << endl;
    print(i + 1);
}

int main()
{
    int i = 1;
    print(i);

return 0;
}