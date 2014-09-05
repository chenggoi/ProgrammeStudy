#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n != 0)
    {
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        double b, c = 0;
        b = n * (n - 1) / 2;

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int d = 0;

                for(int k = 2; k <= a[i]; k++)
                {
                    if(a[i] % k == 0 && a[j] % k == 0)
                    {
                        d++;
                    }
                }

                if(d == 0)
                {
                    c++;
                }
            }
        }

        if(c == 0)
        {
            cout << "No estimate for this data set." << endl;
        }
        else
        {
            double p;
            p = sqrt(6 * b / c);
            cout << setprecision(6) << fixed << p << endl;
        }

        cin >> n;
    }
}
