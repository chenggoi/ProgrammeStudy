#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int x, y;
        cin >> x;

        if(x % 2 != 0)
        {
            y = (x - 1) / 2;
            x = x * x;
            cout << x - 2 * y << " " << x + 2 * y << endl;
        }
        else
        {
            y = x / 2 - 1;
            x = x * x;
            cout << (x - 1) - 2 * y << " " << x + 1 + 2 * y << endl;
        }
    }
}
