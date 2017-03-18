#include<iostream>
using namespace std;
int main()
{
    int n, qq = 1;

    while(cin >> n)
    {
        if(n == 0)
        {
            return 0;
        }

        int a[n]; int sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        sum = sum / n;
        int sm = 0;

        for(int i = 0; i < n; i++)
        {
            if((a[i] - sum) < 0)
            {
                sm = sm + sum - a[i];
            }
            else
            {
                sm = sm + a[i] - sum;
            }
        }

        cout << "Set #" << qq << endl << "The minimum number of moves is " << sm / 2 << "." << endl << endl;
        qq++;
    }
}
