#include<iostream>
using namespace std;
int main()
{
    string a, b, c;
    int d;
    int m = 0;

    for(int i = 1; i > 0; i++)
    {
        cin >> a;

        if(a == "0")
        {
            cout << m << endl;
            m = 0;
        }
        else if(a == "#")
        {
            break;
        }
        else
        {
            cin >> b >> d >> c;

            if(c == "F")
            {

                m = m + 2 * d;

            }
            else if(c == "B")
            {
                float n;
                n = m + 1.5 * d;
                n = n * 10;
                n = n + 5;
                m = n / 10;
            }
            else if(c == "Y")
            {
                if((d > 1) && (d <= 500))
                {
                    m = m + 500;
                }
                else
                {
                    m = m + d;
                }
            }

        }



    }






}
