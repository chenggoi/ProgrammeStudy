#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n)
    {
        if(n == -1)
        {
            break;
        }

        if(n == 1)
        {
            int san;
            cin >> san;

            for(int i = 0; i < san; i++)
            {
                for(int j = 0; j < (san - i - 1); j++)
                {
                    cout << " ";
                }

                for(int k = 0; k < ((i + 1) * 2 - 1); k++)
                {
                    cout << "*";
                }

                cout << endl;
            }
        }
        else if(n == 2)
        {
            int chang, hang;
            cin >> chang >> hang;

            for(int i = 0; i < hang; i++)
            {
                for(int j = 0; j < (hang - i - 1); j++)
                {
                    cout << " ";
                }

                for(int k = 0; k < chang; k++)
                {
                    cout << "*";
                }

                cout << endl;
            }
        }
        else if(n == 3)
        {
            int heng, gao;
            cin >> heng >> gao;

            for(int i = 0; i < gao; i++)
            {
                for(int j = 0; j < heng; j++)
                {
                    cout << "*";
                }

                cout << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
