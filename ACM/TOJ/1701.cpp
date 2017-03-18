#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, q = 1;
    cin >> n;

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        int c[b];

        for(int i = 0; i < b; i++)
        {
            cin >> c[i];
        }

        sort(c, c + b, greater<int>());
        int sum = 0, ww = 0, i = 0;

        while(sum < a && i < b)
        {
            sum = sum + c[i];
            i++;
            ww++;
        }

        if(sum < a)
        {
            cout << "Scenario #" << q << ":" << endl << "impossible" << endl << endl;
        }
        else
        {
            cout << "Scenario #" << q << ":" << endl << ww << endl << endl;
        }

        q++;
    }

}
