#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int j = 0; j < n; j++)
    {
        char a[1000000];
        int s = 0;
        cin >> a;
        int i = 0; int b = 1;

        while(a[i] != 0)
        {
            if(a[i] == 'O')
            {
                s = b + s;
                b++;
            }
            else
            {
                b = 1;
            }

            i++;
        }

        cout << s << endl;
    }


}
