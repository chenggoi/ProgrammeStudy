#include<iostream>
using namespace std;
int main()
{
    string a, c;
    a = "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    c = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
    string s;

    while(getline(cin, s))
    {
        int b;
        b = s.length();

        for(int i = 0; i < b; i++)
        {

            for(int j = 0; j < 45; j++)
            {

                if(s[i] == a[j])
                {
                    s[i] = c[j];

                    break;
                }
            }

        }

        cout << s << endl;
    }
}
