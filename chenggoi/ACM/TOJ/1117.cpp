#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n, m, q = 1;

    while(cin >> n >> m, n != 0 || m != 0)
    {
        int a[n * m + 1], b[m];
        memset(a, 0, sizeof(a));

        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            a[b[i]] = 1;
        }

        for(int i = 0; i < m; i++)
        {
            for(int j = i + 1; j < m; j++)
            {
                if(b[i] < b[j])
                {
                    int ch;
                    ch = b[i];
                    b[i] = b[j];
                    b[j] = ch;
                }
            }
        }

        int sum = 0;

        for(int i = 0; i < m; i++)
        {
            for(int j = m * n; j > b[i]; j--)
            {
                if(j > b[i] && a[j] == 0)
                {
                    sum--;
                    a[j] = 1;
                    break;
                }
            }
        }

        sum = sum + m;
        cout << "Case " << q << ": " << sum << endl;
        q++;
    }
}
