#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string a;
        cin >> a;
        int b;
        b = a.length();

        if(a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u')
        {
            cout << a << "cow" << endl;
        }
        else
        {
            char x;
            x = a[0];

            for(int i = 0; i < b - 1; i++)
            {
                a[i] = a[i + 1];
            }

            a[b - 1] = x;

            cout << a << "ow" << endl;
        }
    }
}
