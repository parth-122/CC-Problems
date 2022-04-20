// Find Maximum Number Using Switch case

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c, e;
    char d;
    cout << "Enter the value of a,b ::" << endl;
    cin >> a >> b;

    fflush(stdin);
    cout << "Enter H or h for Highest Value ::" << endl;
    cout << "Enter S or s for Smallest Value ::" << endl;
    cin >> d;

    switch (d)
    {
    case 'H':
    case 'h':
        c = a > b ? a : b;
        cout << "The Maximum Value is :: " << c << endl;
        break;

    case 's':
    case 'S':
        e = a < b ? a : b;
        cout << "The Minimum Value is :: " << e << endl;
    default:
        break;
    }
    return 0;
}
