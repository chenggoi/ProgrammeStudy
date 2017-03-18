#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin >> n)
    {
        int sm = 1, sum = 1;

        while(sm %= n)
        {

            sm = sm * 10 + 1;
            sum++;
        }

        cout << sum << endl;
    }
}
