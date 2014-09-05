#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 1;

    while(n--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        int b;
        b = s.length();
        cout << m << " ";

        for(int i = 0; i < a - 1; i++)
        {
            cout << s[i];
        }

        for(int i = a; i < b; i++)
        {
            cout << s[i];
        }

        cout << endl;
        m++;
    }
}
