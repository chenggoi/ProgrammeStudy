#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n; cin >> n; getchar();

    while(n--)
    {
        string s;

        getline(cin, s);
        int l = s.length();
        int d = 0;

        for(int i = 0; i < l; i++)
        {
            if(s[i] == ' ')
            {
                for(int j = i - 1; j >= d; j--)
                {
                    cout << s[j];
                }

                cout << " ";
                d = i + 1;
            }

            if(i == l - 1)
            {
                for(int j = i; j >= d; j--)
                {
                    cout << s[j];
                }

            }
        }

        cout << endl;
    }
}
