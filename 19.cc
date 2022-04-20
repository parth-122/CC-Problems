// Sort Elements by Score

#include <bits/stdc++.h>
using namespace std;
struct student
{
    int rollno;
    char name[10];
    char department_name[10];
    float score;
};
void sortbyscore(struct student e[], int n)
{
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (e[i].score > e[j].score)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{

    int n, i;
    cout << "Enter a Number ::" << endl;
    cin >> n;
    struct student a[n];
    for (i = 0; i < n; i++)
    {

        cout << "Enter Details About Student rollno & Name & Department_Name & score ::" << endl;
        cin >> a[i].rollno >> a[i].name >> a[i].department_name >> a[i].score;
    }

    sortbyscore(a, n);
    {

        int i;

        for (i = 0; i < n; i++)
        {
            cout << a[i].rollno << " " << a[i].name << " " << a[i].department_name << " " << a[i].score << endl;
        }
    }

    return 0;
}
