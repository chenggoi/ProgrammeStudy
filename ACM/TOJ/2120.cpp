#include<iostream>
using namespace std;
int main()
{
    int z, i, m, l, n = 1;

    while(cin >> z)
    {
        cin >> i >> m >> l;
        int a[10000];
        a[0] = l;
        int b = 0, c = -1;

        if(z == 0 && i == 0 && m == 0 && l == 0)
        {
            return 0;
        }
        else
        {
            goto loop;

            while(c != a[0])
            {
                l = c;
loop:
                c = ((z % m * l) + i % m) % m;
                b++;
                a[b] = c;
                int d = 0;

                while(d < b)
                {
                    if(a[d] == a[b])
                    {
                        if(d != 0)
                        {
                            b = b - 1;
                        }

                        goto hub;
                    }

                    d++;
                }
            }

hub:

            cout << "Case " << n << ": " << b << endl;
        }

        n++;

    }
}
