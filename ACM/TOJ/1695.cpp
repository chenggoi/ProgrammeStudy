#include<iostream>
using namespace std;
int main()
{
loop:
    int a;

    while(cin >> a)
    {
        int b = 1;
        int c = 1;



        while(c < a)
        {
            b++;
            c = c + b;

        }

        if(b % 2 == 0)
        {
            cout << "TERM " << a << " IS " << b - c + a << "/" << c - a + 1 << endl;
        }
        else
        {
            cout << "TERM " << a << " IS " << c - a + 1 << "/" << b - c + a << endl;
        }

    }


    return 0;
}
