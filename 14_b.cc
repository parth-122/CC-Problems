// Write a c++ Program to convert Uppercase String to Lowercase String

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char a[20], i;

    cout << "Enter Uppercase string::" << endl;
    gets(a);

    cout << "The Uppercase String is ::" << a << endl;
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] <= 'Z' && a[i] >= 'A')
        {
            a[i] = a[i] + 32;
        }
    }
    cout << "The Lowercase String is ::" << a << endl;

    return 0;
}
