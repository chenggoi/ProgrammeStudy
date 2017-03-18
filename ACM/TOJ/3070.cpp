#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string a;
        int b;
        cin >> a >> b;
        int c;
        c = a.length();

        for(int i = 0; i < c; i++)
        {
            if(a[i] + b > 122)
            {
                a[i] = a[i] + b - 123 + 97;
            }
            else
            {
                a[i] = a[i] + b;
            }
        }

        cout << a << endl;
    }
}
