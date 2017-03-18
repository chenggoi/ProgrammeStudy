#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int a[4];
        string b[4];

        for(int i = 0; i < 4; i++)
        {
            cin >> b[i] >> a[i];
        }

        for(int i = 0; i < 4; i++)
        {
            int d = 0;

            for(int j = 0; j < 4; j++)
            {
                if(a[i] < a[j])
                {
                    d++;
                }
            }

            if(d == 3)
            {
                cout << "Poor " << b[i] << endl;
                break;
            }
        }
    }
}
