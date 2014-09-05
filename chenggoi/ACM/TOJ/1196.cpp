#include<iostream>
using namespace std;
int main()
{

    string b[10000];
    int i = 0, j = 0, k = 1;

loop:
    string a;
    cin >> a;
    b[0] = "http://www.acm.org/";

    if(a == "QUIT")
    {
        return 0;
    }


    else
    {

        if(a == "VISIT")
        {
            i++;
            cin >> b[i];
            cout << b[i] << endl;
            j = 0;
        }
        else if(a == "BACK")
        {
            if(i - 1 < 0)
            {
                cout << "Ignored" << endl;
            }
            else
            {
                i--;
                cout << b[i] << endl;
                j++;
            }
        }
        else if(a == "FORWARD")
        {
            if(j < 1)
            {
                cout << "Ignored" << endl;
            }
            else
            {
                j--;
                i++;
                cout << b[i] << endl;
            }
        }
    }

    goto loop;

}
