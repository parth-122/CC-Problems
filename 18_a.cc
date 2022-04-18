// Find Fibonaci Series

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 0, b = 1, t, n;

    cout << "Enter the Number ::" << endl;
    cin >> n;

    cout << a << " " << b;

    for (int i = 0; i < n; i++)
    {
        t = a + b;
        a = b;
        b = t;
        cout << t << " ";
    }

    return 0;
}
