#include<iostream>
using namespace std;
int fang(int w, int q);
int main()
{
    int n;

    while(cin >> n, n != 0)
    {
        string a;
        cin >> a;
        int b;
        b = a.length();
        int c = 0, d = 0;

        for(int i = 0; i < b; i++)
        {
            c = c + (a[i] - 48) * fang(b - i - 1, n);
        }

        for(int j = 0; j < b; j++)
        {
            d = d + a[j] - 48;
        }

        if(c % d == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
int fang(int w, int q)
{
    int a = 1;

    for(int i = 0; i < w; i++)
    {
        a = a * q;
    }

    return a;
}
