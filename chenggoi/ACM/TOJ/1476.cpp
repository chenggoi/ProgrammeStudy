#include<iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;

    while(m--)
    {
        int n;
        cin >> n;
        int x = 0;

        while(n % 2 == 0)
        {
            x++;
            n = n / 2;
        }

        cout << n << " " << x << endl;
    }

}
