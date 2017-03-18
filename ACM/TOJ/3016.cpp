#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n, m, mm;

    while(cin >> n >> m, n != 0 && m != 0)
    {
        int a[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }


        string s;
        getchar();
        getline(cin, s);
        string ff;
        ff = s;

        for(int k = 0; k < n; k++)
        {
            mm = m;
            int k1;
            k1 = k;

            for(int i = 0; i < mm; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(k1 == j)
                    {
                        k1 = a[j] - 1;
                        break;
                    }
                }

                if(k1 == k)
                {

                    mm = mm % (i + 1);
                    mm = mm + i + 1;
                }
            }

            s[k1] = ff[k];
        }

        cout << s << endl;

    }
}
