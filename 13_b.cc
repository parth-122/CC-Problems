// Write a C++ Program to convert Lowercase String to Uppercase String

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char a[20];
    int i;

    cout << "Enter the Lowercase String ::" << endl;
    gets(a);

    cout << "The Lowercase string is ::" << a << endl;

    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
    }
    cout << "The Uppercase String is ::" << a << endl;
    return 0;
}
