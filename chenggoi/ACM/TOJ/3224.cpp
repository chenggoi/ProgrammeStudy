#include<iostream>
using  namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        long long a, b;
        cin >> a >> b;
        cout << a*b - 1 << endl;
    }
}
