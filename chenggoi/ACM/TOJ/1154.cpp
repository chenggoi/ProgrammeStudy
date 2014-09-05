#include<iostream>
using namespace std;
int main()
{
    int n, m, ca = 1;

    while(cin >> n >> m, n != 0 || m != 0)
    {
        int sum = 0;

        for(int a = 1; a < n; a++)
        {
            for(int b = a + 1; b < n; b++)
            {
                if((a * a + b * b + m) % (a * b) == 0)
                {
                    sum++;
                }
            }
        }

        cout << "Case " << ca << ": " << sum << endl;
        ca++;
    }
}
