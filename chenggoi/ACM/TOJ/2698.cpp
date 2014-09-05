#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int a[40000];

    for(int i = 0; i < 40000; i++)
    {
        a[i] = 1;
    }

    for(int i = 2; i * i < 40000; i++)
    {
        for(int j = i; i * j < 40000; j++)
        {
            a[i * j] = 0;
        }
    }

    int n;

    while(cin >> n, n != 0)
    {
        int sum = 0;

        for(int i = 2; i <= n / 2; i++)
        {
            if(a[i] == 1)
            {
                if(a[n - i] == 1)
                {
                    sum++;
                }
            }
        }

        cout << sum << endl;
    }
}
