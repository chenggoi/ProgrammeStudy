#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[100]; int q;

    for(int i = 0; i < 100; i++)
    {
        cin >> a[i];

        if(a[i] == 0)
        {

            q = i;
            break;
        }
    }

    cout << "PERFECTION OUTPUT" << endl;

    for(int i = 0; i <= q; i++)
    {
        if(a[i] == 0)
        {cout << "END OF OUTPUT" << endl;}
        else
        {
            int sum = 0;

            for(int j = 1; j < a[i]; j++)
            {
                if(a[i] % j == 0)
                {
                    sum = sum + j;
                }
            }

            if(sum < a[i])
            {
                cout << setw(5) << a[i] << "  DEFICIENT" << endl;
            }
            else if(sum > a[i])
            {
                cout << setw(5) << a[i] << "  ABUNDANT" << endl;
            }
            else
            {
                cout << setw(5) << a[i] << "  PERFECT" << endl;
            }
        }
    }

}
