#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        double x, y, v;
        cin >> x >> y >> v;
        double SIN;
        SIN = (9.8 * x * x / v / v + y) / sqrt(x * x + y * y);
        double th;
        th = asin(SIN);
        th = (th - atan((-y) / x)) / 2;

        if(th >= 0)
        {
            cout << setprecision(6) << fixed << th << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
