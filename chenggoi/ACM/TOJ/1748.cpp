#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string m, n;

    while(cin >> m >> n, m != "0" || n != "0")
    {
        int  a, b, c, d, x = 1;
        b = m[m.length() - 1] - 48;
        d = n[n.length() - 1] - 48;

        if(n.length() > 1)
        {
            d = d + (10 * (n[n.length() - 2] - 48)) % 4;
        }

        c = b;

        if(n == "0")
        {
            cout << "1" << endl;
        }
        else
        {
            a = m[m.length() - 1] - '0';

            if(a == 0 || a == 1 || a == 5 || a == 6) {printf("%d\n", a); continue;}

            if(d == 0) { d = d + 4; }

            while(d--) { x = (a * x) % 10; }

            printf("%d\n", x);
        }
    }
}
