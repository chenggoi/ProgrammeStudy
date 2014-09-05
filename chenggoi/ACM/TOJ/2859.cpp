#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n != 0)
    {
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                int x;

                if(a[i] < a[j])
                {
                    x = a[i];
                    a[i] = a[j];
                    a[j] = x;
                }
            }

        }

        for(int i = 0; i < n; i++)
        {
            if(a[i + 1] != a[i])
            {
                cout << a[i + 1] << endl;
                break;
            }
        }

        cin >> n;
    }
}
