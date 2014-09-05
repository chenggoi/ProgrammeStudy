#include<iostream>
using namespace std;
int main()
{
    int n = 1;
    int a[10001], b[10001];

    for(int i = 1; i < 10001; i++)
    {
        a[i] = n;
        b[i] = n;
        n++;
    }

    for(int i = 1; i < 10001; i++)
    {
        int x = 0, y = 1;

        while(a[i] >= y)
        {
            x++;
            y = y * 10;
        }

        int c = a[i];
        y = y / 10;

        for(int j = 0; j < x; j++)
        {
            c = c + a[i] / y;
            a[i] = a[i] - (a[i] / y) * y;
            y = y / 10;
        }

        if(c < 10001)
        {
            b[c] = 0;
        }
    }

    for(int k = 1; k < 10001; k++)
    {
        if(b[k] != 0)
        {
            cout << b[k] << endl;
        }
    }

}
