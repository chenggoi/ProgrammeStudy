#include<iostream>
#include<cstring>
using namespace std;
int f(int n)
{
    int i = 1;

    for(int j = 0; j < n; j++)
    {
        i = i * 10;
    }

    return i;
}
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int num;
        cin >> num;
        int s = 0;

        for(int i = num - 54; i < num; i++)
        {
            if(((i % 10) + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10 + (i / 10000) % 10 + (i / 100000) % 10 + i) == num)
            {
                cout << i << endl;
                s = 1;
                break;
            }
        }

        if(s == 0)
        {
            cout << "0" << endl;
        }

    }
}
