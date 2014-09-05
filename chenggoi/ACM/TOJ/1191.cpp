#include<iostream>
using namespace std;
int main()
{
Head:
    int n;
    cin >> n;

    if(n != 0)
    {
        int h[20] = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
        int s[20] = {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
        char a[n + 1];
        cin >> a;

        for(int i = 0; i <= n; i++)
        {
            if(a[i] == 'E')
            {
                if(s[0] > 50)
                {
                    cout << "The worm ran off the board on move " << i << "." << endl;
                    goto Head;
                }

                for(int m = 19; m > 0; m--)
                {
                    h[m] = h[m - 1];
                    s[m] = s[m - 1];
                }

                s[0] = s[0] + 1;

                for(int m = 19; m > 0; m--)
                {
                    if(h[m] == h[0] && s[m] == s[0])
                    {
                        cout << "The worm ran into itself on move " << i + 1 << "." << endl; goto Head;
                    }

                }



            }
            else if(a[i] == 'W')
            {
                if(s[0] < 1)
                {
                    cout << "The worm ran off the board on move " << i << "." << endl; goto Head;
                }

                for(int m = 19; m > 0; m--)
                {
                    h[m] = h[m - 1];
                    s[m] = s[m - 1];
                }

                s[0] = s[0] - 1;

                for(int m = 19; m > 0; m--)
                {
                    if(h[m] == h[0] && s[m] == s[0])
                    {
                        cout << "The worm ran into itself on move " << i + 1 << "." << endl; goto Head;
                    }
                }


            }
            else if(a[i] == 'S')
            {
                if(h[0] > 50)
                {
                    cout << "The worm ran off the board on move " << i << "." << endl; goto Head;
                }

                for(int m = 19; m > 0; m--)
                {
                    h[m] = h[m - 1];
                    s[m] = s[m - 1];
                }

                h[0] = h[0] + 1;

                for(int m = 19; m > 0; m--)
                {
                    if(h[m] == h[0] && s[m] == s[0])
                    {
                        cout << "The worm ran into itself on move " << i + 1 << "." << endl; goto Head;
                    }
                }


            }
            else if(a[i] == 'N')
            {
                if(h[0] < 1)
                {
                    cout << "The worm ran off the board on move " << i << "." << endl; goto Head;
                }

                for(int m = 19; m > 0; m--)
                {
                    h[m] = h[m - 1];
                    s[m] = s[m - 1];
                }

                h[0] = h[0] - 1;

                for(int m = 19; m > 0; m--)
                {
                    if(h[m] == h[0] && s[m] == s[0])
                    {
                        cout << "The worm ran into itself on move " << i + 1 << "." << endl; goto Head;
                    }
                }


            }
            else if(i == n)
            {
                cout << "The worm successfully made all " << i << " moves." << endl;
            }

        }

        goto Head;
    }

    else
    {
        return 0;
    }

}
