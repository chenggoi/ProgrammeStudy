#include<iostream>
using namespace std;
int f(int n, int i)
{
    int ji = 1;

    for(int j = 0; j < n; j++)
    {
        ji = ji * i;
    }

    return ji;
}
int main()
{
    int b, n;

    while(cin >> b >> n, b != 0 || n != 0)
    {
        int sum = max(b, f(n, 0)) - min(b, f(n, 0)), ch;

        for(int i = 1; i > 0; i++)
        {
            ch = max(b, f(n, i)) - min(b, f(n, i));

            if(ch < sum)
            {
                sum = ch;
            }
            else
            {
                cout << i - 1 << endl;
                break;
            }
        }
    }
}
