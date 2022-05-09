// Check Whether The Number is Unique or not

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a Number ::" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                // goto k;
                cout << "This is Unique Number ::" << endl;
            }
            else
            {
                cout << "This is not Unique Number ::" << endl;
                // goto g;
            }
        }
    }
    // g:
    // k:
    return 0;
}
