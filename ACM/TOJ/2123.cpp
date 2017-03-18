#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n)
    {
        int b = 0;

        if(n == 0)
        {
            return 0;
        }
        else if(n >= 1)
        {
            for(int i = 0; i < n; i++)
            {
                int a;
                cin >> a;

                if(a == 0)
                {
                    b++;
                }
            }
        }

        cout << "Mary won " << b << " times and John won " << n - b << " times" << endl;
    }

}
