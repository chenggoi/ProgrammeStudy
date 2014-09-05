#include<iostream>
#include<string>
using namespace std;
int liter(int x, int y);
int fang(int n);
int main()
{
    int a, n, h;

    while(cin >> n)
    {
        if(n < 0 || n > 12)
        {
            break;
        }

        int i, j;
        string b;
        b = "-";

        for(i = 1; i <= n; i++)
        {
            int m = 1;

            for(j = 0; j < i; j++)
            {
                h = liter(3, m - 1);
                m++;
            }

            string d(h, ' ');
            b = b + d + b;
        }

        cout << b << endl;
    }

    //system("pause");
}
int liter(int x, int y)
{
    int k, z;
    z = 1;

    for(k = 1; k <= y; k++)
    {
        z = z * x;
    }

    return z;
}


