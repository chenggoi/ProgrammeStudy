#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    for(int p = 1; p <= N; p++)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;

        for(int k = 0; k < (n * (n - 1) / 2); k++)
        {
            for(int j = 0; j < (n - 1); j++)
            {
                if(a[j] > a[j + 1])
                {
                    int temp;
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    sum = sum + 1;
                }
            }

            int x = 0;

            for(int i = 0; i < n; i++)
            {
                if(a[i] > a[i + 1])
                {
                    break;
                }
                else
                {
                    x = x + 1;

                    if(x == n - 1)
                    {
                        goto loop;
                    }
                }
            }
        }

loop:
        cout << "Scenario #" << p << ":" << endl;
        cout << sum << endl << endl;
    }

}
