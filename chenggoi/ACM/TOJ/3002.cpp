#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n, n != 0)
    {
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            int ch;

            for(int j = i; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    ch = a[i];
                    a[i] = a[j];
                    a[j] = ch;
                }
            }
        }

        int sim = 0;

        if(n % 2 != 0)
        {
            for(int i = 0; i < (n + 1) / 2; i++)
            {
                if(a[i] % 2 == 0)
                {
                    sim = sim + a[i] / 2 + 1;
                }
                else
                {
                    sim = sim + (a[i] + 1) / 2;
                }
            }
        }
        else
        {
            for(int i = 0; i < n / 2 + 1; i++)
            {
                if(a[i] % 2 == 0)
                {
                    sim = sim + a[i] / 2 + 1;
                }
                else
                {
                    sim = sim + (a[i] + 1) / 2;
                }
            }
        }

        cout << sim << endl;
    }
}
