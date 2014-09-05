#include<iostream>
using namespace std;
int main()
{
    string a;

    while(getline(cin, a) && a != "ENDOFINPUT")
    {
        if(a == "END")
        {
            continue;
        }

        string b;
        string x, y;
        x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        y = "VWXYZABCDEFGHIJKLMNOPQRSTU";
        getline(cin, b);
        int s;
        s = b.length();

        for(int i = 0; i < s; i++)
        {
            for(int j = 0; j < 26; j++)
            {
                if(b[i] == x[j])
                {
                    b[i] = y[j];
                    break;
                }
            }
        }

        cout << b << endl;
    }
}
