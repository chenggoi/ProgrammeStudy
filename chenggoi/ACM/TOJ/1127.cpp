#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    string a[n]; int b[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = 0;
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            for(int k = j + 1; k < m; k++)
            {
                if(a[i][j] > a[i][k])
                {
                    b[i]++;
                }
            }
        }
    }

    int c[n];

    for(int i = 0; i < n; i++)
    {
        c[i] = -1;
    }

    int ch;

    for(int i = 0; i < n; i++)
    {
        int sum = 0;

        for(int j = 0; j < n; j++)
        {
            if(b[i] > b[j])
            {
                sum++;
            }
        }

        while(c[sum] != -1)
        {
            sum++;
        }

        c[sum] = i;
    }


    for(int i = 0; i < n; i++)
    {
        ch = c[i];
        cout << a[ch] << endl;
    }

}
