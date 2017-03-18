#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n << endl;

    while(n--)
    {
        string mHaab[19] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
        string mTzolkin[20] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
        int y, z;
        string x, m;

        cin >> x >> m >> y;
        int qq = x.length();
        int wq = 0;

        for(int k = 0; k < qq - 1; k++)
        {
            int sw = 1;

            for(int h = 0; h < k; h++)
            {
                sw = sw * 10;
            }

            wq = wq + (x[qq - k - 2] - 48) * sw;
        }

        for(int i = 0; i < 19; i++)
        {
            if(mHaab[i] == m)
            {
                z = y * 365 + 20 * i + wq;
                break;
            }
        }

        cout << z % 260 % 13 + 1 << " " << mTzolkin[z % 20] << " " << z / 260 << endl;
    }
}
