#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n, n != 0)
    {
        long long a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum = 0;

        for(int i = n - 1; i >= 0; i--)
        {
            sum = sum + a[i];

            for(int j = 0; j < i; j++)
            {
                a[j] = a[j] + a[i];
            }
        }

        cout << sum << endl;
    }
}
