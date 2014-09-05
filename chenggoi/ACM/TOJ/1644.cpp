#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, m = 0, r;
    cin >> n;

    while((r = getchar()) != '\n' && r != EOF) ;

    while(m < n)
    {
        string a, b;
        getline(cin, a, '\n');
        b = a;
        int w;
        w = a.length();
        int q;
        q = w / 2;

        for(int i = 0; i < q; i++)
        {
            char c;
            c = b[i];
            b[i] = b[w - 1];
            b[w - 1] = c;
            w--;
        }

        cout << b << endl;
        m++;
    }
}
