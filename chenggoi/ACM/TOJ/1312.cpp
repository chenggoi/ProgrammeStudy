#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; int y = 0;

    while(y < n)
    {
        int h = 0, h2 = 0;
        int a[21][21];

        for(int i = 0; i < 19; i++)
        {
            for(int j = 0; j < 19; j++)
            {
                cin >> a[i][j];
            }
        }

        int s = 1, t = 1, k = 1, l = 1;

        for(int i = 0; i < 19; i++)
        {
            for(int j = 0; j < 19; j++)
            {
                if(a[i][j] != 0)
                {
                    int p = i;

                    for(int q = j; q <= j + 6; q++)
                    {
                        if(a[p][q] == a[p][q + 1])
                        {
                            s = s + 1;
                        }
                        else
                        {
                            break;
                        }
                    }

                    int w = i;

                    for(int x = j; x >= j - 6; x--)
                    {
                        if(a[w][x] == a[w][x - 1])
                        {
                            s = s + 1;
                        }
                        else
                        {
                            break;
                        }
                    }

                    if(s == 5)
                    {
                        cout << a[i][j] << endl << i + 1 << " " << j + 1 << endl;
                        goto loop;
                    }

                    s = 1;
                }
            }
        }

        for(int i = 0; i < 19; i++)
        {
            for(int j = 0; j < 19; j++)
            {
                if(a[i][j] != 0)
                {
                    int p = j;

                    for(int q = i; q <= i + 6; q++)
                    {
                        if(a[q][p] == a[q + 1][p])
                        {
                            k = k + 1;

                        }
                        else
                        {
                            break;
                        }
                    }

                    int x = j;

                    for(int w = i; w >= i - 6; w--)
                    {
                        if(a[w][x] == a[w - 1][x])
                        {
                            k = k + 1;
                        }
                        else
                        {
                            break;
                        }
                    }

                    if(k == 5)
                    {
                        cout << a[i][j] << endl << i + 1 << " " << j + 1 << endl;
                        goto loop;
                    }

                    k = 1;
                }
            }
        }

        for(int i = 0; i < 19; i++)
        {
            for(int j = 0; j < 19; j++)
            {
                if(a[i][j] != 0)
                {
                    int p = i;

                    for(int q = j; q >= j - 6; q--)
                    {
                        if(a[p][q] == a[p + 1][q - 1])
                        {
                            l = l + 1;
                            p++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    int w = i;

                    for(int x = j; x <= j + 6; x++)
                    {
                        if(a[w][x] == a[w - 1][x + 1])
                        {
                            l = l + 1;
                            w--;
                        }
                        else
                        {
                            break;
                        }
                    }

                    if(l == 5)
                    {
                        cout << a[i + 4][j - 4] << endl << i + 5 << " " << j - 3 << endl;
                        goto loop;
                    }

                    l = 1;
                }
            }
        }

        for(int i = 0; i < 19; i++)
        {
            for(int j = 0; j < 19; j++)
            {
                if(a[i][j] != 0)
                {
                    int p = i;

                    for(int q = j; q <= j + 6; q++)
                    {
                        if(a[p][q] == a[p + 1][q + 1])
                        {
                            t = t + 1;
                            p++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    int w = i;

                    for(int x = j; x >= j - 6; x--)
                    {
                        if(a[w][x] == a[w - 1][x - 1])
                        {
                            t = t + 1;
                            w--;
                        }
                        else
                        {
                            break;
                        }
                    }

                    if(t == 5)
                    {
                        cout << a[i][j] << endl << i + 1 << " " << j + 1 << endl;
                        goto loop;
                    }

                    t = 1;
                }
            }

        }

        cout << "0" << endl;
loop:
        y++;

    }

    //system("pause");
}
