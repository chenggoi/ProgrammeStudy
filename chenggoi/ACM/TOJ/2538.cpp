#include<iostream>
using namespace std;
int main()
{
    int n, ca = 1;
    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;
        int sum = 0;

        for(int i = 0; i < a; i++)
        {
            int kk = 0;

            for(int j = 1; j <= i + 2; j++)
            {
                kk = kk + j;
            }

            sum = sum + (i + 1) * kk;
        }

        cout << ca << " " << a << " " << sum << endl;
        ca++;
    }
}
