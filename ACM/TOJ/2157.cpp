#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int ww = 0; ww < n; ww++)
    {
        int a;
        long b;
        cin >> a >> b;
        int sum = 0;

        for(long i = 2; b >= (1 + i)*i / 2; i++)
        {
            if((b - (i - 1)*i / 2) % i == 0)
            {
                sum++;
            }
        }

        cout << a << " " << sum << endl;
    }
}
