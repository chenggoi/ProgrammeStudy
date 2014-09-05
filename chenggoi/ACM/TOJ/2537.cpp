#include<iostream>
using namespace std;
int main()
{
    int n, ca = 1;
    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;
        cout << ca << " ";
        //if(a>=25)
        cout << a / 25 << " QUARTER(S), ";
        a = a % 25;
        //if(a>=10)
        cout << a / 10 << " DIME(S), ";
        a = a % 10;
        //if(a>=5)
        cout << a / 5 << " NICKEL(S), ";
        a = a % 5;
        cout << a / 1 << " PENNY(S)" << endl;
        ca++;
    }
}
