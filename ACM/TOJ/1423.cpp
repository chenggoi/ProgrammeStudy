#include<iostream>
using namespace std;
int main()
{

    int min = 11, max = 0;
    int c = 10;
    int d = 0;
    int e;

    while(cin >> e)
    {
        if(e != 0)
        {
            string a, b;
            cin >> a >> b;

            if((a == "too") && (b == "high"))
            {
                if(c > e)
                {
                    min = e;
                    c = e;
                }
                else
                {
                    min = c;
                }

            }
            else if((a == "too") && (b == "low"))
            {
                if(d > e)
                {
                    max = d;
                }
                else
                {
                    max = e;
                    d = e;
                }

            }
            else if((a == "right") && (b == "on"))
            {
                if((e > max) && (e < min))
                {
                    cout << "Stan may be honest" << endl;
                }
                else
                {
                    cout << "Stan is dishonest" << endl;
                }

                min = 11;
                max = 0;
                c = 10;
                d = 0;


            }
        }
        else
        {
            return 0;
        }
    }
}
