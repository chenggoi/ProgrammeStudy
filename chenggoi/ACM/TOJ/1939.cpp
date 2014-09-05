#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n, n != -1)
    {
        int sum = 0, a, b, c, d = 0, e;

        for(int i = 0; i < n; i++)
        {
            cin >> a >> b;
            c = b + d;
            sum = sum + a * c;
            d = 0 - b;
        }

        cout << sum << " miles" << endl;
    }
}
