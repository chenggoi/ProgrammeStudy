#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a, q = 1;
    cin >> a; getchar();

    while(a--)
    {

        string x, y;
        getline(cin, x);
        getline(cin, y);
        int c, d;
        c = x.length();
        d = y.length();

        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < d; j++)
            {
                if(x[i] == y[j])
                {
                    x[i] = '0';
                    y[j] = '0';
                    break;
                }
            }
        }

        int sum = 0;

        for(int i = 0; i < c; i++)
        {
            if(x[i] != '0')
            {
                sum++;
            }
        }

        for(int i = 0; i < d; i++)
        {
            if(y[i] != '0')
            {
                sum++;
            }
        }

        cout << "Case #" << q << ":  " << sum << endl;

        q++;
    }

}
