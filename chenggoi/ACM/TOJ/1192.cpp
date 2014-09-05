#include<iostream>
using namespace std;
int main()
{
    int n, x = 0;

    while(cin >> n && n != 0)
    {
        int a[n], b[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int sa = 0, sb = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] - b[i] > 1)
            {
                sa = sa + a[i];
            }
            else if(b[i] - a[i] > 1)
            {
                sb = sb + b[i];
            }
            else if(a[i] - b[i] == 1)
            {
                if(a[i] == 2 && b[i] == 1)
                {
                    sb = sb + 6;
                }
                else
                {
                    sb = sb + b[i] + a[i];
                }
            }
            else if(b[i] - a[i] == 1)
            {
                if(b[i] == 2 && a[i] == 1)
                {
                    sa = sa + 6;
                }
                else
                {
                    sa = sa + a[i] + b[i];
                }
            }
        }

        if(x == 1)
        {
            cout << endl;
        }

        cout << "A has " << sa << " points. B has " << sb << " points." << endl;

        x = 1;
    }

}
