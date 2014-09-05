#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    while(x--)
    {
        int n;
        cin >> n;
        int a[n + 1];

        for(int i = 0; i < n + 1; i++)
        {
            a[i] = 0;
        }

        for(int i = 1; i < n + 1; i++)
        {

            for(int j = 1; j * i < n + 1; j++)
            {
                a[j * i] = 1 - a[i * j];
            }
        }

        int s = 0;

        for(int q = 1; q < n + 1; q++)
        {
            if(a[q] == 1)
            {
                s++;
            }
        }

        cout << s << endl;
    }

}
