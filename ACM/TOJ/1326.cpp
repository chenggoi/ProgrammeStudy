#include<iostream>
using namespace std;
int main()
{
    string s;

    while(cin >> s)
    {
        int b = s.length();
        int m[20], j = 0, n[20], l = 0;

        for(int x = 1; x < 20; x++)
        {
            n[x] = 0;
        }

        n[0] = 10;

        for(int i = 0; i < b; i++)
        {
            int c;

            if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'H' && s[i] != 'W' && s[i] != 'Y')
            {

                if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V')
                {
                    c = 1;
                }
                else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z')
                {
                    c = 2;
                }
                else if(s[i] == 'D' || s[i] == 'T')
                {
                    c = 3;
                }
                else if(s[i] == 'L')
                {
                    c = 4;
                }
                else if(s[i] == 'M' || s[i] == 'N')
                {
                    c = 5;
                }
                else if(s[i] == 'R')
                {
                    c = 6;
                }

                n[l] = c;

                if(n[l] != n[l - 1])
                {
                    m[j] = c;

                    j++;
                }

            }

            l++;
        }

        for(int k = 0; k < j; k++)
        {
            cout << m[k];
        }

        cout << endl;
    }


}
