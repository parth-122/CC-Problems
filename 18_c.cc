// Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, j, x;
    cout << "Enter a Number ::" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the number of array ::" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter a Value of x ::" << endl;
    cin >> x;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                cout << "The First Number is :: " << a[i] << " " << "The Second Number is :: " << a[j] << endl;
            }
        }
    }

    return 0;
}
