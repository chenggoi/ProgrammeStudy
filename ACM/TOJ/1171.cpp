#include<iostream>
using namespace std;
bool f(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) { return false; }
    }

    return true;
}
int main()
{

    int n;
    int qq = 0;

    while(cin >> n, n != 0)
    {
        for(int i = 3; i < n; i++)
        {
            if(f(i))
            {
                if(f(n - i))
                {
                    cout << n << " = " << i << " + " << n - i << endl;
                    qq = 1;
                    break;
                }
            }
        }

        if(qq == 0)
        {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
    }
}
