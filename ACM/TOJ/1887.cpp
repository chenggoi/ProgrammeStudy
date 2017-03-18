#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    while(cin >> c >> d >> a >> b, a != 0 || b != 0 || c != 0 || d != 0)
    {
        int m, n;
        m = max(a, b) * 100 / max(c, d);
        n = min(a, b) * 100 / min(c, d);

        if(min(m, n) < 100)
        {
            cout << min(m, n) << "%" << endl;
        }
        else
        {
            cout << "100%" << endl;
        }
    }
}
