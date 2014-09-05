#include<iostream>
using namespace std;
int main()
{
    char a[256];
    cin.get(a, 256, '\n');

    while(a[0] != '#')
    {
        int sum = 0;

        for(int i = 0; a[i] != '\0'; i++)
        {
            if(a[i] == ' ')
            {
                continue;
            }
            else
            {
                sum = sum + (i + 1) * (a[i] - 64);
            }
        }

        cout << sum << endl;

        cin.get();

        cin.get(a, 256, '\n');
    }
}
