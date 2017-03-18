#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;
        int sum = 0, l;
        l = s.length();

        for(int i = 0; i < l; i++)
        {
            sum = sum + s[i] - 48;
        }

        cout << sum << endl;
    }
}
