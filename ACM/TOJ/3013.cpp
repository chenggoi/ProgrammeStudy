#include<iostream>
using namespace std;
int main()
{
    double r, a, b, c = 1;

    while(cin >> r)
    {
        if(r == 0)
        {
            return 0;
        }
        else
        {
            cin >> a >> b;
            a = a / 2;
            b = b / 2;

            if(a * a + b * b <= r * r)
            {
                cout << "Pizza " << c << " fits on the table." << endl;
            }
            else
            {
                cout << "Pizza " << c << " does not fit on the table." << endl;
            }

            c++;
        }
    }
}

