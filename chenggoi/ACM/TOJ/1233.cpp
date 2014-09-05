#include<iostream>
using namespace std;
int main()
{
    int N, x, y;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> x >> y;

        if(x != y && (x - y) != 2)
        {
            cout << "No Number" << endl;
        }
        else
        {


            int n;

            if(x == y)
            {
                if((x % 2) != 0)
                {
                    n = 2 * x - 1;
                }
                else
                {
                    n = 2 * x;
                }
            }
            else
            {
                if((x % 2) != 0)
                {
                    n = x + y - 1;
                }
                else
                {
                    n = x + y;
                }
            }

            cout << n << endl;
        }
    }

    return 0;
}
