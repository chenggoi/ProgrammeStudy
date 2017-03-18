#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a, b;

    while(cin >> a >> b, a != 0 || b != 0)
    {
        int sum = 0, d;

        while(a != 0)
        {
            d = a % 10 + b % 10;

            if(d >= 10)
            {
                sum++;
                d = (a / 10) % 10 + (b / 10) % 10 + 1;

                while(d >= 10)
                {
                    sum++;
                    a = a / 10;
                    b = b / 10;
                    d = (a / 10) % 10 + (b / 10) % 10 + 1;
                }
            }

            a = a / 10; b = b / 10;
        }

        if(sum == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if(sum == 1)
        {
            cout << sum << " carry operation." << endl;
        }
        else
        {
            cout << sum << " carry operations." << endl;
        }

    }
}
