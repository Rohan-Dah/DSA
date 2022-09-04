#include<iostream>
using namespace std;

int main()
{
    cout << "Enter teh number of rows and columns: " << endl;
    int m, n;
    cin >> m >> n;

    int **p = new int*[m];
    for(int i = 0; i < m; i++)
    {
        p[i] = new int[n];
        for(int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
    }

return 0;
}

/*
This is how we dynamically create a 2d array. First we need to create an array that stores address that means a poinetr array, so we will be requiring a double pointer ofc kyuki we will be having a[0] stored in that poointer and that basically is an address so we anyway are storing an address. That exactly is being done on line 12. Ek double poinetr ke andar pointer address store kar rahe hai. Then after that

we are applying a loop till m (rows) jaha we are allocating p[i] a new int[n] (a new integer array of size n(column)). This means agar hum p[0] ke address pe pohochenge toh hume n possible blocks milenge and that exactly is the meaning of a 2d array (ek row ke andar n number of columns)

That is how it is done.
*/