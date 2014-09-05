#include<iostream>
#include<algorithm>
bool com(int a, int b)
{
    return a < b;
}
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        int c[a], d[b];

        for(int i = 0; i < a; i++)
        {
            cin >> c[i];
        }

        for(int i = 0; i < b; i++)
        {
            cin >> d[i];
        }

        sort(c, c + a, com);
        sort(d, d + b, com);
        int qq = 0, s;

        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                if(c[i] == d[j] && c[i] != s)
                {
                    if(qq != 0)
                    {
                        cout << " ";
                    }

                    cout << c[i];
                    s = c[i];
                    qq++;
                }
            }
        }

        cout << endl;
    }
}
