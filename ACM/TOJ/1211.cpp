#include<iostream>
using namespace std;
int main()
{
    string a, b;
    int w;
    getline(cin, a);
    getline(cin, b);
    w = a.length();
    cout << b << endl << a << endl; string c;

    while(getline(cin, c))
    {

        int d;

        d = c.length();

        for(int i = 0; i < d; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(c[i] == a[j])
                {
                    c[i] = b[j];
                    break;
                }
            }
        }

        cout << c << endl;

    }
}
