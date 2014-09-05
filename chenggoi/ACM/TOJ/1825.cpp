#include<iostream>
using namespace std;
int main()
{
    double a[3] = {4.5, 6.0, 5.0}, b[3] = {150, 300, 200}, c[3] = {200, 500, 300};
    double sp, w, st;

    while(cin >> sp >> w >> st)
    {
        if(sp == 0 && w == 0 && st == 0)
        {return 0;}
        else
        {
            int x = 0;

            for(int i = 0; i < 3; i++)
            {
                if(sp <= a[i] && w >= b[i] && st >= c[i])
                {
                    if(i == 0)
                    {cout << "Wide Receiver "; x++;}
                    else if(i == 1)
                    {cout << "Lineman "; x++;}
                    else
                    {cout << "Quarterback "; x++;}
                }
            }

            if(x == 0)
            {
                cout << "No positions";
            }

            cout << endl;
        }
    }

}
