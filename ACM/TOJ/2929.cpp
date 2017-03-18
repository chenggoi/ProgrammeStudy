#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        long long int x;
        cin >> x;

        if(x < 3)
        {
            x = x * x + 1;
        }
        else if(x >= 2)
        {
            x = x * x + 1 + (x - 2) * (x - 2);
        }

        cout << x << endl;
    }
}
