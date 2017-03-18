#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    int m = 1;
    cin >> n;

    while(n--)
    {
        double a;
        string b;
        cin >> a >> b;

        if(b == "kg")
        {
            cout << setprecision(4) << fixed << m << " " << a * 2.2046 << " lb" << endl;
        }
        else if(b == "l")
        {
            cout << setprecision(4) << fixed << m << " " << a * 0.2642 << " g" << endl;
        }
        else if(b == "lb")
        {
            cout << setprecision(4) << fixed << m << " " << a * 0.4536 << " kg" << endl;
        }
        else if(b == "g")
        {
            cout << setprecision(4) << fixed << m << " " << a * 3.7854 << " l" << endl;
        }

        m++;
    }
}
