#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int b;
    int s = 0;

    while(cin >> b)
    {
        if(b == -1)
        {
            break;
        }
        else if(b == 0)
        {
            int ch, i;

            for(i = 0; i < s; i++)
            {
                for(int j = i + 1; j < s; j++)
                {
                    if(a[i] < a[j])
                    {
                        ch = a[i];
                        a[i] = a[j];
                        a[j] = ch;
                    }
                }
            }

            int sum = 0;

            for(int i = 0; i < s; i++)
            {
                for(int j = i + 1; j < s; j++)
                {
                    if(a[i] == 2 * a[j])
                    {
                        sum++;
                    }
                }
            }

            cout << sum << endl;
            s = 0;
        }
        else
        {
            a[s] = b;
            s++;
        }
    }
}
