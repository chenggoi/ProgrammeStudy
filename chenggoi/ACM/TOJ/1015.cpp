#include<iostream>

using namespace std;
int main()
{
    int n; int i = 1;
    cin >> n;

    while(n > 0)
    {

        int x, y;
        cin >> x >> y;
        double z;

        if(x % 2 != 0 && y % 2 != 0)
        {
            z = x * y + 0.41;
            cout << "Scenario #" << i << ":" << endl << z << endl << endl;
        }
        else
        {
            z = x * y;
            cout << "Scenario #" << i << ":" << endl << z << ".00" << endl << endl;
        }

        n--;
        i++;
    }
}
