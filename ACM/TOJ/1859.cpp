#include<iostream>
using namespace std;
int main()
{
    int Flag[40000] = {0};

    for(int i = 2; i * i <= 40000; i++)
    {
        if(Flag[i] == 0)
        {
            for(int j = i + i; j <= 40000; j = j + i)
            {
                Flag[j] = 1;
            }
        }
    }

    int x;

    while(cin >> x)
    {
        if(x == 0)
        {
            return 0;
        }
        else
        {
            int sum = 0;

            for(int i = 2; i <= x / 2; i++)
            {
                if(Flag[i] == 0 && Flag[x - i] == 0)
                {
                    sum++;
                }

            }

            cout << sum << endl;
        }
    }
}
