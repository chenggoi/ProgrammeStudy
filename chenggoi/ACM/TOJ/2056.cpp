#include<iostream>
using namespace std;
int main()
{
    int x1, x2, x3, a, b, c;

    while(cin >> x1 >> x2 >> x3)
    {
        c = x1;
        a = (x3 - c) / 2 - (x2 - c);
        b = x2 - a - c;
        int s1, s2, s3;
        s1 = 9 * a + 3 * b + c;
        s2 = 16 * a + 4 * b + c;
        s3 = 25 * a + 5 * b + c;
        cout << s1 << " " << s2 << " " << s3 << endl;
    }
}
