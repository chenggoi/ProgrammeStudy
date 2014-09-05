#include<iostream>
using namespace std;
int main()
{

    string m, n;

    while(cin >> m >> n)
    {
        int a, b, c = 0;
        a = m.length();
        b = n.length();
        int i = 0;

        for(int j = 0; j < b; j++)
        {
            if(n[j] == m[i])
            {
                i++;
                c++;
            }

        }

        if(c == a)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

}
