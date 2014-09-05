#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int m;
        cin >> m;
        int a[m], b[m];

        for(int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int sum = 0;

        for(int i = 0; i < m; i++)
        {
            sum = sum + a[i] * b[i];
        }

        cout << sum << endl;
    }
}
