#include<iostream>
using namespace std;
int main()
{
    int n, ww = 1;
    cin >> n;

    while(n--)
    {

        string a, b;
        cin >> a >> b; cout << ww << " ";
        int c, d;
        c = a.length();
        d = b.length();

        if(c > d)
        {
            int ws = 0;

            for(int i = c - 1; i >= 0; i--)
            {
                if(d > 0)
                {
                    a[i] = a[i] + b[d - 1] - 48;
                }

                while(a[i] - 48 > 1)
                {
                    a[i - 1]++;
                    a[i] = a[i] - 2;

                    if(i - 1 < 0)
                    {
                        cout << "1";
                        ws = 1;
                    }
                }

                d--;
            }

            if(ws == 1)
            {
                cout << a << endl;
            }
            else
            {
                int qq, wq = 0;
                qq = a.length();

                while(a[wq] == '0' && wq < qq - 1)
                {
                    wq++;
                }

                for(int i = wq; i < qq; i++)
                {
                    cout << a[i];
                }

                cout << endl;
            }
        }
        else
        {
            int ws = 0;

            for(int i = d - 1; i >= 0; i--)
            {
                if(c > 0)
                {
                    b[i] = b[i] + a[c - 1] - 48;
                }

                while(b[i] - 48 > 1)
                {
                    b[i - 1]++;
                    b[i] = b[i] - 2;

                    if(i - 1 < 0)
                    {
                        cout << "1";
                        ws = 1;
                    }
                }

                c--;
            }

            if(ws == 1)
            {
                cout << b << endl;
            }
            else
            {
                int qq, wq = 0;
                qq = b.length();

                while(b[wq] == '0' && wq < qq - 1)
                {
                    wq++;
                }

                for(int i = wq; i < qq; i++)
                {
                    cout << b[i];
                }

                cout << endl;
            }
        }

        ww++;
    }
}
