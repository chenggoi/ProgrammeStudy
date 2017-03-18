#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double s, t = 0;

    for(int i = 0; i < 12; i++)
    {
        cin >> s; t = t + s;
    }

    cout << "$" << setprecision(2) << fixed << t / 12 << endl;

}
