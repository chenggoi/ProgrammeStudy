#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n)
    {
        if(n == 0)
        {
            return 0;
        }
        else
        {
            int a = 1;

            while(n != 1)
            {
                if(n % 2 != 0)
                {
                    if(a == 1)
                    {
                        n = n * 3 + 1;
                    }
                    else
                    {
                        n = n + n * 2 + 1;
                    }
                }
                else
                {
                    n = n / 2;
                }

                a++;
            } cout << a << endl;
        }
    }


}
