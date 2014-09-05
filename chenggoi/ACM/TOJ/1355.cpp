#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n)
    {


        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if(n == 1)
        {
            cout << "Jolly" << endl;
        }
        else
        {
            int b[n - 1];

            for(int k = 0; k < n - 1; k++)
            {
                b[k] = a[k] - a[k + 1];

                if(b[k] < 0)
                {
                    b[k] = 0 - b[k];
                }
            }

            for(int k = 0; k < n - 2; k++)
            {
                for(int j = k + 1; j < n - 1; j++)
                {
                    if(b[k] < b[j])
                    {
                        int x;
                        x = b[k];
                        b[k] = b[j];
                        b[j] = x;
                    }
                }
            }


            if(b[0] == n - 1)
            {
                int m = 0;

                for(int j = 0; j < n - 2; j++)
                {
                    if(b[j] - b[j + 1] == 1)
                    {
                        m++;
                    }
                }


                if((m == n - 2))
                {
                    cout << "Jolly" << endl;
                }
                else
                {
                    cout << "Not jolly" << endl;
                }
            }
            else
            {
                cout << "Not jolly" << endl;
            }
        }
    }
}
