// Check For Male and Female

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char Gender;
    cout << "Enter Male For[M,m]" << endl;
    cout << "Enter Female For[F,f]" << endl;
    cin >> Gender;

    switch (Gender)
    {
    case 'M':
    case 'm':
        cout << "Male" << endl;
        break;
    case 'F':
    case 'f':

        cout << "Female ::" << endl;

    default:
        cout << "You Have Not specified any one ::" << endl;
        break;
    }
    return 0;
}
