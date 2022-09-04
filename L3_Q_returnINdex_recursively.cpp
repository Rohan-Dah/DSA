//Return all the indexes where the element is present

#include<iostream>
using namespace std;

int allIndexes(int a[], int size, int x, int output[])
{
    if(size == 0)
    {
        return 0;
    }

    if(x == a[0])
    {
        output[0] = x;
    }

    int smallSend = allIndexes(a+1, size-1, x, output);
    return smallSend;

}

int main()
{
    cout << "Enter the size: " << endl;
    int size;
    cin >> size;
    int a[size];
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\nYour array is: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nEnter the element to pick: " << endl;
    int x;
    cin >> x;
    int output[size];

    cout << allIndexes(a, size, x, output) << endl;
return 0;
}