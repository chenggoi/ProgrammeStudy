#include<iostream>
using namespace std;
int main()
{
    int x, y;

    while(cin >> x >> y)
    {
        int a[y], b[y], ww = y, zz = x;
        cout << x << "C" << y << " = ";

        for(int i = 0; i < ww; i++)
        {
            a[i] = x;
            b[i] = y;
            x--;
            y--;
        }

        int bb[10000] = {0};

        for(int i = 0; i < ww; i++)
        {
            for(int j = 2; j * j <= a[i]; j++)
            {
                if(a[i] % j == 0)
                {
                    a[i] = a[i] / j;
                    bb[j]++;

                    while(a[i] % j == 0)
                    {
                        bb[j]++;
                        a[i] = a[i] / j;
                    }
                }


            }

            if(a[i] > 1)
            {
                bb[a[i]]++;
            }
        }

        for(int i = 0; i < ww; i++)
        {
            for(int j = 2; j * j <= b[i]; j++)
            {
                if(b[i] % j == 0)
                {
                    b[i] = b[i] / j;
                    bb[j]--;

                    while(b[i] % j == 0)
                    {
                        bb[j]--;
                        b[i] = b[i] / j;
                    }
                }
            }

            if(b[i] > 1)
            {
                bb[b[i]]--;
            }
        }

        for(int i = 0; i < 10000; i++)
        {
            if(bb[i] != 0)
            {
                int k = 0;

                for(int j = i + 1; j < 10000; j++)
                {
                    if(bb[j] != 0)
                    {
                        k = 1;
                        break;
                    }
                }

                if(k == 1)
                {
                    for(int l = 0; l < bb[i]; l++)
                    {
                        cout << i << " * ";
                    }
                }
                else
                {
                    for(int l = 0; l < bb[i]; l++)
                    {
                        if(l != bb[i] - 1)
                        {
                            cout << i << " * ";
                        }
                        else
                        {
                            cout << i << endl;
                            goto loop;
                        }
                    }
                }
            }
        }

loop:
        ;
    }
}
