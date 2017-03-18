#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int m, sum = 0;
        int a[10001] = {0};
        cin >> m;

        for(int i = 0; i < m; i++)
        {
            int s;
            cin >> s;
            a[s]++;

            if(a[s] > sum)
            {
                sum = a[s];
            }
        }

        cout << sum << endl;
    }
}
