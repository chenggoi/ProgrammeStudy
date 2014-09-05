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
        int x, y;
        x = a.length();
        y = b.length();
        int ss = 0, ww = 0;
        int q = 0;

        for(int i = 0; i < y; i++)
        {
            for(int j = q; j < x; j++)
            {
                if(a[j] == b[i])
                {ss++; q = j + 1; break;}
            }

            if(ss == y)
            {
                ww++;
                break;
            }
        }

        if(ss != y)
        {
            ss = 0;
            int q = x - 1;

            for(int i = 0; i < y; i++)
            {
                for(int j = q; j >= 0; j--)
                {
                    if(a[j] == b[i])
                    {ss++; q = j - 1; break;}
                }

                if(ss == y)
                {
                    ww++;
                    break;
                }
            }
        }

        if(ww != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }




    }
}
