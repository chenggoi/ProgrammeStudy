#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int j = 0; j < n; j++)
    {
        int a, c = 0;
        cin >> a;
        int b[a];

        for(int i = 0; i < a; i++)
        {
            cin >> b[i];
            c = c + b[i];
        }

        int d;
        d = c / a;
        double e = 0;

        for(int i = 0; i < a; i++)
        {
            if(b[i] > d)
            {
                e++;
            }
        }

        cout << setiosflags(ios::fixed) << setprecision(3) << 100 * e / a;
        cout << "%" << endl;
    }
}
