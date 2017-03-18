#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n; int i = 1; double pi = acos(-1.0);
    cin >> n;

    while(n > 0)
    {

        double x, y;

        cin >> x >> y;
        double z;
        z = (x * sin(pi / y)) / (1 + sin(pi / y));
        cout << "Scenario #" << i << ":" << endl << setprecision(3) << fixed << z << endl << endl;


        n--;
        i++;
    }
}
