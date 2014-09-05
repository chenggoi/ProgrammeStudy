#include<iostream>
using namespace std;
int main()
{
    double a;

    while(cin >> a, a != 0)
    {
        double sum = 0, i = 2;

        while(sum < a)
        {
            sum = sum + 1 / i;
            i++;
        }

        cout << i - 2 << " card(s)" << endl;
    }
}
