// Merge Two Arrays

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c[10];
    int j = 0, i;

    for (i = 0; i <= 4; i++)
    {
        c[i] = a[i];
    }
    for (i = 5; i <= 9; i++)
    {

        c[i] = b[j];
        j++;
    }
    for (int i = 0; i <= 9; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}
