#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum;
        sum = b - c;

        if(a < sum)
        {
            cout << "advertise" << endl;
        }
        else if(a == sum)
        {
            cout << "does not matter" << endl;
        }
        else
        {
            cout << "do not advertise" << endl;
        }
    }
}
