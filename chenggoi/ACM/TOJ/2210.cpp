#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string a, b;
        cin >> a >> b;
        int c, d;
        c = a.length();
        d = b.length();

        while(a[0] == '0')
        {
            for(int i = 0; i < c; i++)
            {
                a[i] = a[i + 1];
            } c--;
        }

        while(b[0] == '0')
        {
            for(int i = 0; i < d; i++)
            {
                b[i] = b[i + 1];
            }

            d--;
        }

        while(a[c - 1] == '0')
        {
            a[c - 1] = '\0';
            c = c - 1;
        }

        while(b[d - 1] == '0')
        {
            b[d - 1] = '\0';
            d = d - 1;
        }

        int y;

        if(c > d)
        {
            y = c;
        }

        else
        {y = d;}

        int q[y + 1];

        for(int j = 0; j < y + 1; j++)
        {
            q[j] = 0;
        }

        if(c >= d)
        {
            for(int i = 0; i < d; i++)
            {
                q[i] = q[i] + a[i] - 48 + b[i] - 48;

                if(q[i] >= 10)
                {
                    q[i] = q[i] - 10;
                    q[i + 1] = 1;
                }
            }

            for(int i = d; i < c; i++)
            {
                q[i] = q[i] + a[i] - 48;

                if(q[i] >= 10)
                {
                    q[i] = q[i] - 10;
                    q[i + 1] = 1;
                }
            }
        }

        if(c < d)
        {


            for(int i = 0; i < c; i++)
            {
                q[i] = q[i] + a[i] - 48 + b[i] - 48;

                if(q[i] >= 10)
                {
                    q[i] = q[i] - 10;
                    q[i + 1] = 1;
                }
            }

            for(int i = c; i < d; i++)
            {
                q[i] = q[i] + b[i] - 48;

                if(q[i] >= 10)
                {
                    q[i] = q[i] - 10;
                    q[i + 1] = 1;
                }
            }
        }

        int w = 0;
        int i = 1, e = 0;

        for(int k = 0; k < y; k++)
        {
            if(q[k] != 0)
            {
                w++;
            }

            if(w == 0)
            {
                continue;
            }

            e = e + q[k];
            e = e * 10;
        }

        if(q[y] != 0)
        {
            e = e + q[y];
        }
        else
        {
            e = e / 10;
        }

        cout << e;
        cout << endl;
    }

}
