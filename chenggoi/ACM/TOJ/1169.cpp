#include<iostream>
using namespace std;
int main()
{
loop:
    int n;
    cin >> n;

    if(n == 0)
    {

        return 0;
    }
    else
    {
        int a[n][n];

        for(int k = 0; k < n; k++)
        {
            for(int l = 0; l < n; l++)
            {
                cin >> a[k][l];
            }
        }

        int c = 0, r = 0, our = 0, jir = 0, ouc = 0, jic = 0;

        for(int k = 0; k < n; k++)
        {
            for(int l = 0; l < n; l++)
            {
                r = r + a[k][l];
            }

            if(r % 2 == 0)
            {
                our = our + 1;
            }
            else
            {
                jir++;
            }
        }

        for(int l = 0; l < n; l++)
        {
            for(int k = 0; k < n; k++)
            {
                c = c + a[k][l];
            }

            if(c % 2 == 0)
            {
                ouc = ouc + 1;
            }
            else
            {
                jic++;
            }
        }

        if(our == n && ouc == n)
        {
            cout << "OK" << endl;
            goto loop;
        }
        else
        {
            int i, j;

            int b[n][n];

            for(int x = 0; x < n; x++)
            {
                for(int y = 0; y < n; y++)
                {
                    for(int w = 0; w < n; w++)
                    {
                        for(int e = 0; e < n; e++)
                        {
                            b[w][e] = a[w][e];
                        }
                    }

                    b[x][y] = 1 - b[x][y];
                    int c = 0, r = 0, our = 0, jir = 0, ouc = 0, jic = 0;

                    for(int k = 0; k < n; k++)
                    {
                        for(int l = 0; l < n; l++)
                        {
                            c = c + b[k][l];
                        }

                        if(c % 2 == 0)
                        {
                            ouc = ouc + 1;
                        }
                        else
                        {
                            jic++;
                        }
                    }

                    for(int l = 0; l < n; l++)
                    {
                        for(int k = 0; k < n; k++)
                        {
                            r = r + b[k][l];
                        }

                        if(r % 2 == 0)
                        {
                            our = our + 1;
                        }
                        else
                        {
                            jir++;
                        }
                    }

                    if(our == n && ouc == n)
                    {
                        i = x + 1;
                        j = y + 1;
                        cout << "Change bit (" << i << "," << j << ")" << endl;
                        goto loop;
                    }
                }
            }
        }

        cout << "Corrupt" << endl;
        goto loop;

    }
}
