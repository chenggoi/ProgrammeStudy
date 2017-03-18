#include<iostream>
using namespace std;
int main()
{
    int n, u, d;

    while(cin >> n >> u >> d)
    {
        if(n == 0 && u == 0 && d == 0)
        {

            return 0;
        }
        else
        {
            int m = 0;

            while(n > 0)
            {
                m++;
                n = n - u;

                if(n > 0)
                {
                    n = n + d;
                    m++;
                }
            }

            cout << m << endl;
        }

    }

}

