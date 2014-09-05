#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int j = 0; j < n; j++)
    {
        int a, b;
        cin >> a >> b;
        int s, d;
        s = (a + b) / 2;
        d = (a - b) / 2;

        if(d < 0)
        {
            d = 0 - d;
        }

        if(a == (s + d) && b == (s - d))
        {
            cout << s << " " << d << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }


}
