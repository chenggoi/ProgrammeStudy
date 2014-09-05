#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    string a[x];
    int b[x];

    for(int i = 0; i < x; i++)
    {
        cin >> a[i] >> b[i];
    }

    for(int qq = 0; qq < y; qq++)
    {
        int c = 0;
        string s;

        while(cin >> s, s != ".")
        {
            for(int i = 0; i < x; i++)
            {
                if(s == a[i])
                {
                    c = c + b[i];
                    break;
                }
            }
        }

        cout << c << endl;
    }
}
