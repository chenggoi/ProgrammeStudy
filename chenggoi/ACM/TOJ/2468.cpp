#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string a;
        int b[26] = {0}, l;
        char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        cin >> a;
        l = a.length();

        for(int i = 0; i < l; i++)
        {
            int f = a[i] - 97;
            b[f]++;

        }

        for(int i = 0; i < 26; i++)
        {
            for(int j = i + 1; j < 26; j++)
            {
                int ch;
                char s;

                if(b[i] < b[j])
                {
                    ch = b[i];
                    s = c[i];
                    b[i] = b[j];
                    c[i] = c[j];
                    b[j] = ch;
                    c[j] = s;
                }
            }
        }

        cout << c[0];
        int i = 1;

        while(b[i] == b[i - 1])
        {
            cout << c[i];
            i++;
        }

        cout << endl;
    }
}
