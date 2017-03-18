#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    char a[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int b[m + 1];

    for(int k = 0; k < m + 1; k++)
    {
        b[k] = 0;
    }

    int q = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[j][i] == '0')
            {
                q = q + 1;
                a[j][i] = '1';
            }
            else if(a[j][i] == '1')
            {
                b[q] = b[q] + 1;
                q = 0;
            }

            if(j == m - 1)
            {
                b[q] = b[q] + 1;
                q = 0;
            }
        }
    }

    for(int w = 1; w < m + 1; w++)
    {
        if(b[w] != 0)
        {
            cout << w << " " << b[w] << endl;
        }
    }
}
