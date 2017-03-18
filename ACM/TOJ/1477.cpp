#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int m;
        cin >> m;
        int c = 0;
        int a[1000] = {2}, b[1000] = {2}, i = 0, k = 0;

        for(m; m != 0; m = m / 2)
        {
            a[i] = m % 2;
            i++;
        }

        for(int j = 0; j <= i; j++)
        {
            if(a[j] != 0 && a[j] != 2)
            {
                b[k] = j;
                k++;
            }
        }

        for(int j = 0; j < k; j++)
        {
            cout << b[j];

            if(j != k - 1)
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
