#include<iostream>
using namespace std;
int a[1000001];
int main()
{
    int a1, b;

    for(int i = 1; i <= 1000000; i++)
    {
        for(int j = 1; i * j <= 1000000; j++)
        {
            a[i * j]++;
        }
    }

    for(int i = 1; i <= 1000000; i++)
    {
        if(i % a[i] == 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }

    while(cin >> a1 >> b)
    {
        int sum = 0;

        for(int i = a1; i <= b; i++)
        {
            if(a[i] != 0)
            {
                sum++;
            }
        }

        cout << sum << endl;
    }
}
