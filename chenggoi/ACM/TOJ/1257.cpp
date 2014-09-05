#include<iostream>
using namespace std;
int f91(int a);
int main()
{
    int n, x = 0;

    while(x < 250000)
    {
        cin >> n;

        if(n == 0)
        {
            return 0;
        }
        else
        {
            int m;
            m = n;
            n = f91(n);
            cout << "f91(" << m << ") = " << n << endl;
        }

        x++;
    }
}
int f91(int a)
{
    if(a > 100)
    {
        a = a - 10;
    }
    else if(a <= 100)
    {
        a = f91(f91(a + 11));
    }

    return a;
}
