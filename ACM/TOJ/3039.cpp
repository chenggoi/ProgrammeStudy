#include<iostream>
using namespace std;
int main()
{
    double n[6]; int sum = 0;

    for(int i = 0; i < 6; i++)
    {
        cin >> n[i];


        if(n[i] == 0)
        {
            sum++;
        }
    }

    while(sum != 6)
    {
        for(int i = 0; i < 6; i++)
        {
            for(int j = i + 1; j < 6; j++)
            {
                if(n[i] > n[j])
                {
                    double ch;
                    ch = n[i];
                    n[i] = n[j];
                    n[j] = ch;
                }
            }
        }

        double q;
        q = 1.0 * (n[2] + n[3] + n[1] + n[4]) / 4;
        cout << q << endl;
        sum = 0;

        for(int i = 0; i < 6; i++)
        {
            cin >> n[i];

            if(n[i] == 0)
            {
                sum++;
            }
        }
    }
}
