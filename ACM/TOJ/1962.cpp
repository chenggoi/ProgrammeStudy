#include<iostream>
using namespace std;
int main()
{
    string s;

    while(cin >> s, s != "0")
    {
        int len;
        len = s.length();
        long long sum = 0;

        for(int i = 0; i < len; i++)
        {
            int e = 1;

            for(int j = 0; j < len - i; j++)
            {
                e = e * 2;
            }

            sum = sum + (s[i] - 48) * (e - 1);
        }

        cout << sum << endl;
    }
}
