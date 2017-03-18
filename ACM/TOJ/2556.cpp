#include<iostream>
using namespace std;
int main()
{
loop:
    int hang, lie, n, x = 0, i = 0, s = 0;
    cin >> hang >> lie >> n;

    if(hang == 0 && lie == 0 && n == 0)
    {
        return 0;
    }
    else
    {
        char a[hang][lie];

        for(int k = 0; k < hang; k++)
            for(int l = 0; l < lie; l++)
            {
                cin >> a[k][l];
            }

        int sum = hang * lie;
        int b[sum], c[sum];
N:
        b[i] = x;
        c[i] = n - 1;

        if(a[x][n - 1] == 'E')
        {
            n = n + 1;
        }
        else if(a[x][n - 1] == 'W')
        {
            n = n - 1;
        }
        else if(a[x][n - 1] == 'S')
        {
            x = x + 1;
        }
        else if(a[x][n - 1] == 'N')
        {
            x = x - 1;
        }

        s = s + 1;

        if((x < 0) || (x == hang) || ((n - 1) < 0) || ((n - 1) == lie))
        {
            cout << i + 1 << " step(s) to exit" << endl;
            goto loop;
        }

        for(int j = 0; j <= i; j++)
        {
            if(b[j] == x && c[j] == (n - 1))
            {
                cout << j << " step(s) before a loop of " << s - j << " step(s)" << endl;
                goto loop;
            }
        }

        i++;
        goto N;
    }
}
