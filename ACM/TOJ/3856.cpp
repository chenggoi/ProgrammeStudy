#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    while(cin >> a >> b >> c >> d)
    {
        int x[11][11];
        int y[11][11];
        int z[11][11];

        for(int i = 0; i < 11; i++)
        {
            for(int j = 0; j < 11; j++)
            {
                x[i][j] = 1;
                y[i][j] = 1;
                z[i][j] = 1;
            }
        }

        for(int i = 1; i < a + 1; i++)
        {
            for(int j = 1; j < b + 1; j++)
            {
                x[i][j] = x[i - 1][j] + x[i][j - 1];
            }
        }

        for(int i = 1; i < c + 1; i++)
        {
            for(int j = 1; j < d + 1; j++)
            {
                y[i][j] = y[i - 1][j] + y[i][j - 1];
            }
        }

        for(int i = 1; i < a - c + 1; i++)
        {
            for(int j = 1; j < b - d + 1; j++)
            {
                z[i][j] = z[i - 1][j] + z[i][j - 1];
            }
        }

        cout << x[a][b] - y[c][d]*z[a - c][b - d] << endl;
    }
}
