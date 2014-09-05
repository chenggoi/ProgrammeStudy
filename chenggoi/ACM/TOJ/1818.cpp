#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double a[2];
    cin >> a[0];

    while(cin >> a[1], a[1] != 999)
    {
        cout << setprecision(2) << fixed << a[1] - a[0] << endl;
        a[0] = a[1];
    }

    cout << "End of Output" << endl;
}
