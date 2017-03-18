#include<iostream>
using namespace std;
int main()
{
    int n, q = 1;

    while(cin >> n, n != 0)
    {
        string s[n];

        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        cout << "SET " << q << endl;
        q++;

        if(n % 2 != 0)
        {
            for(int i = 0; i < n - 1; i = i + 2)
            {
                cout << s[i] << endl;
            }

            cout << s[n - 1] << endl;

            for(int i = n - 2; i > 0; i = i - 2)
            {
                cout << s[i] << endl;
            }
        }
        else
        {
            for(int i = 0; i < n - 1; i = i + 2)
            {
                cout << s[i] << endl;
            }

            cout << s[n - 1] << endl;

            for(int i = n - 3; i > 0; i = i - 2)
            {
                cout << s[i] << endl;
            }
        }
    }
}
