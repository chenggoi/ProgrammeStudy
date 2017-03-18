#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    for(int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        int c = 0;

        for(int j = 0; j < b; j++)
        {
            int d;
            cin >> d;
            c = c + d;
        }

        int e;
        e = c - b + 1;
        cout << e << endl;
    }

    return 0;
}
