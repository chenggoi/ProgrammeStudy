#include<iostream>
#include<iomanip>
using namespace std;
int kk(int a);
int main()
{
    int m, n;

    while(cin >> m >> n)
    {
        string a[m];
        double b[m];

        for(int i = 0; i < m; i++)
        {
            cin >> a[i] >> b[i];
        }

        string s;
        double sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> s;

            for(int j = 0; j < m; j++)
            {
                if(s == a[j])
                {
                    sum = sum + b[j];
                    break;
                }
            }
        }

        cout << setprecision(2) << fixed << sum << endl;
    }
}
