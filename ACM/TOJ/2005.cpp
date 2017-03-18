#include<iostream>
using namespace std;
int main()
{
    int m, n, t = 0;;

    while(cin >> m >> n, m != 0 && n != 0)
    {
        t++;
        char a[m + 200][n + 200];

        for(int i = 0; i < m + 1; i++)
        {
            for(int j = 0; j < n + 1; j++)
            {
                a[i][j] = '0';
            }
        }

        int y[3][1100], z[3][1100]; int x[3]; int k, l, o;

        for(int e = 0; e < 3; e++)
        {

            cin >> x[e];

            for(int r = 0; r < x[e]; r++)
            {

                cin >> y[e][r] >> z[e][r];
                int f, g;
                f = y[e][r];
                g = z[e][r];
                a[f][g] = '2';
            }
        }

        for(int e = 0; e < 3; e++)
        {
            for(int r = 0; r < x[e]; r++)
            {
                l = y[e][r];
                o = z[e][r];

                if(e == 0)
                {
                    k = z[e][r];

                    for(int s = l; s > 0 && k < n + 1; s--)
                    {
                        if(a[s - 1][k + 1] != '2')
                        {
                            a[s - 1][k + 1] = '1';
                            k++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    k = z[e][r];

                    for(int s = l; s < m + 1 && k > 0; s++)
                    {
                        if(a[s + 1][k - 1] != '2')
                        {
                            a[s + 1][k - 1] = '1';
                            k--;
                        }
                        else
                        {
                            break;
                        }
                    }

                    k = z[e][r];

                    for(int s = l; s > 0 && k > 0; s--)
                    {

                        if(a[s - 1][k - 1] != '2')
                        {
                            a[s - 1][k - 1] = '1';
                            k--;
                        }
                        else if(a[s - 1][k - 1] == '2')
                        {
                            break;
                        }
                    }

                    k = z[e][r];

                    for(int s = l; s < m + 1 && k < n + 1; s++)
                    {
                        if(a[s + 1][k + 1] != '2')
                        {
                            a[s + 1][k + 1] = '1';
                            k++;
                        }
                        else if(a[s + 1][k + 1] == '2')
                        {
                            break;
                        }
                    }

                    for(int s = l; s > 0; s--)
                    {
                        if(a[s - 1][o] != '2')
                        {
                            a[s - 1][o] = '1';
                        }
                        else if(a[s - 1][o] == '2')
                        {
                            break;
                        }
                    }

                    for(int s = l; s < m + 1; s++)
                    {
                        if(a[s + 1][o] != '2')
                        {
                            a[s + 1][o] = '1';
                        }
                        else if(a[s + 1][o] == '2')
                        {
                            break;
                        }
                    }

                    for(int s = o; s > 0; s--)
                    {
                        if(a[l][s - 1] != '2')
                        {
                            a[l][s - 1] = '1';
                        }
                        else if(a[l][s - 1] == '2')
                        {
                            break;
                        }
                    }

                    for(int s = o; s < n + 1; s++)
                    {
                        if(a[l][s + 1] != '2')
                        {
                            a[l][s + 1] = '1';
                        }
                        else if(a[l][s + 1] == '2')
                        {
                            break;
                        }
                    }
                }
                else if(e == 1)
                {
                    a[l][o] = '2';

                    if(a[l + 1][o - 2] != '2')
                    {
                        a[l + 1][o - 2] = '1';
                    }

                    if(a[l - 1][o - 2] != '2')
                    {
                        a[l - 1][o - 2] = '1';
                    }

                    if(a[l - 2][o - 1] != '2')
                    {
                        a[l - 2][o - 1] = '1';
                    }

                    if(a[l - 2][o + 1] != '2')
                    {
                        a[l - 2][o + 1] = '1';
                    }

                    if(a[l + 1][o + 2] != '2')
                    {
                        a[l + 1][o + 2] = '1';
                    }

                    if(a[l - 1][o + 2] != '2')
                    {
                        a[l - 1][o + 2] = '1';
                    }

                    if(a[l + 2][o - 1] != '2')
                    {
                        a[l + 2][o - 1] = '1';
                    }

                    if(a[l + 2][o + 1] != '2')
                    {
                        a[l + 2][o + 1] = '1';
                    }
                }
            }
        }

        int sum = 0;

        for(int i = 1; i < m + 1; i++)
        {
            for(int j = 1; j < n + 1; j++)
            {
                if(a[i][j] == '0')
                {
                    sum++;
                }
            }
        }

        cout << "Board " << t << " has " << sum << " safe squares." << endl;
    }
}
