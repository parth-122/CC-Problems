// Multiply Two Matrices

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3][3], i, j, k;
    int b[3][3];
    int mul[3][3];

    cout << "Enter the First Array Matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    cout << "Enter the Second Array Matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }

    cout << "The Multiplication of Matrix is ::" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0; j < 3; j++)
        {
            cout << mul[i][j];
        }
        cout << endl;
    }

    return 0;
}
