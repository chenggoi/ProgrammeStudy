#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x, y;
    x = max(a, b) - min(a, b);
    y = max(b, c) - min(b, c);
    cout << max(x, y) - 1 << endl;

}
