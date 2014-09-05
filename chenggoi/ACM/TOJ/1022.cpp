#include<iostream>
using namespace std;
int main()
{
    int a[7] = {0};

    while(cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6], a[1] != 0 || a[2] != 0 || a[3] != 0 || a[4] != 0 || a[5] != 0 || a[6] != 0)
    {
        int sum = a[6] + a[5] + a[4];
        a[1] = a[1] - 11 * a[5];
        a[2] = a[2] - 5 * a[4];
        int x = a[3] % 4;
        sum = sum + a[3] / 4;

        if(x > 0)
        {
            sum++;
        }

        if(x == 3)
        {
            if(a[2] > 0)
            {
                a[2] = a[2] - 1;

                if(a[1] > 0)
                {
                    a[1] = a[1] - 5;
                }
            }
            else if(a[1] > 0)
            {
                a[1] = a[1] - 9;
            }
        }
        else if(x == 2)
        {
            int i = 0;

            while(a[2] > 0 && i < 3)
            {
                a[2]--;
                i++;
            }

            a[1] = a[1] - (3 - i) * 4 - 6;
        }
        else if(x == 1)
        {
            int i = 0;

            while(a[2] > 0 && i < 5)
            {
                a[2]--;
                i++;
            }

            a[1] = a[1] - (5 - i) * 4 - 7;
        }

        if(a[2] > 0)
        {
            int y = a[2] % 9;
            sum = sum + a[2] / 9;

            if(y > 0)
            {
                sum++;
                a[1] = a[1] - (9 - y) * 4;
            }
        }

        if(a[2] < 0)
        {
            a[1] = a[1] + a[2] * 4;
        }

        if(a[1] > 0)
        {
            int z = a[1] % 36;
            sum = sum + a[1] / 36;

            if(z > 0)
            {
                sum++;
            }
        }

        cout << sum << endl;
    }
}
