// Find Linear Search Using Functions

#include <bits/stdc++.h>
using namespace std;

int check(int a[], int n, int x, int i)
{
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << "Your Number is ::" << a[i] << endl;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter the length of the array ::" << endl;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cout << "Your Number is ::" << endl;
        cin >> a[i];
    }
    int x;
    cout << "Enter the key that you want to find ::" << endl;
    cin >> x;

    if (check(a, n, x, i))
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
    return 0;
}
