#include<iostream>
using namespace std;
int main()
{
    int n, qq = 1;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;
        cout << "String #" << qq << endl;
        qq++;

        for(int i = 0; i < s.length(); i++)
        {
            char d;

            if(s[i] != 'Z')
            {
                d = s[i] + 1;
            }
            else
            {
                d = 'A';
            }

            cout << d;
        }

        cout << endl << endl;
    }
}
