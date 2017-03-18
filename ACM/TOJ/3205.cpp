#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        sort(a[i], a[i] + n);
    }

    int b[n];

    for(int i = 0; i < n; i++)
    {
        b[i] = a[i][n / 2];
    }

    sort(b, b + n);
    cout << b[n / 2] << endl;
}
