#include<iostream>
using namespace std;
int main()
{
    string n;

    while(cin >> n, n != "#")
    {
        int a;
        char s;
        a = n.length();

        for(int i = 0; i < a; i++)
        {
            int ch, q;
            q = i + 1;

            if(n[i] >= 'A' && n[i] <= 'Z')
            {
                ch = n[i] - 'A';

                if(ch <= 2)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 0)
                    {
                        ch = 3 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
                else if(ch <= 5)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 3)
                    {
                        ch = 3 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
                else if(ch <= 8)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 6)
                    {
                        ch = 3 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
                else if(ch <= 11)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 9)
                    {
                        ch = 3 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
                else if(ch <= 14)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 12)
                    {
                        ch = 3 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
                else if(ch <= 18)
                {
                    while(q > 4)
                    {
                        q = q - 4;
                    }

                    ch = ch - q;

                    if(ch < 15)
                    {
                        ch = 4 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
                else if(ch <= 21)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 19)
                    {
                        ch = 3 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
                else if(ch <= 25)
                {
                    while(q > 4)
                    {
                        q = q - 4;
                    }

                    ch = ch - q;

                    if(ch < 22)
                    {
                        ch = 4 + ch;
                    }

                    s = 'A' + ch;
                    cout << s;
                }
            }
            else if(n[i] >= 'a' && n[i] <= 'z')
            {
                ch = n[i] - 'a';

                if(ch <= 2)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 0)
                    {
                        ch = 3 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
                else if(ch <= 5)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 3)
                    {
                        ch = 3 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
                else if(ch <= 8)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 6)
                    {
                        ch = 3 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
                else if(ch <= 11)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 9)
                    {
                        ch = 3 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
                else if(ch <= 14)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 12)
                    {
                        ch = 3 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
                else if(ch <= 18)
                {
                    while(q > 4)
                    {
                        q = q - 4;
                    }

                    ch = ch - q;

                    if(ch < 15)
                    {
                        ch = 4 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
                else if(ch <= 21)
                {
                    while(q > 3)
                    {
                        q = q - 3;
                    }

                    ch = ch - q;

                    if(ch < 19)
                    {
                        ch = 3 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
                else if(ch <= 25)
                {
                    while(q > 4)
                    {
                        q = q - 4;
                    }

                    ch = ch - q;

                    if(ch < 22)
                    {
                        ch = 4 + ch;
                    }

                    s = 'a' + ch;
                    cout << s;
                }
            }
        }

        cout << endl;
    }
}
