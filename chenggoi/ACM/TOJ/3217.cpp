#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string a, b;
        cin >> a >> b;
        int c, d;
        c = a.length();
        d = b.length();
        int hp1 = 0, hp2 = 0, st1 = 1, st2 = 1, sp1 = 0, sp2 = 0;

        for(int i = 0; i < c; i++)
        {
            hp1 = (hp1 + (83 - a[i]) * (83 - a[i])) % 97;
            st1 = (st1 * a[i]) % 79;

            for(int j = i + 1; j < c; j++)
            {
                sp1 = (sp1 + a[i] * a[j]) % 11;
            }
        }

        for(int i = 0; i < d; i++)
        {
            hp2 = (hp2 + (83 - b[i]) * (83 - b[i])) % 97;
            st2 = (st2 * b[i]) % 79;

            for(int j = i + 1; j < d; j++)
            {
                sp2 = (sp2 + b[i] * b[j]) % 11;
            }
        }

        hp1 = 300 - (hp1 % 97);
        hp2 = 300 - (hp2 % 97);
        st1 = 22 + (st1 % 79);
        st2 = (st2 % 79) + 22;
        sp1 = 20 - (sp1 % 11);
        sp2 = 20 - (sp2 % 11);
        //cout<<hp2<<" "<<st2<<" "<<sp2<<endl;
        int t1, t2;

        for(int i = 1; i <= 1000; i++)
        {
            if(i % sp1 == 0)
            {
                hp2 = hp2 - st1;

                if(hp2 <= 0)
                {
                    t2 = i;
                    break;
                }

            }
        }

        for(int i = 1; i <= 1000; i++)
        {
            if(i % sp2 == 0)
            {
                hp1 = hp1 - st2;

                if(hp1 <= 0)
                {
                    t1 = i;
                    break;
                }
            }
        }

        //cout<<t1<<" "<<t2<<endl;
        if(t1 == t2 || hp1 > 0 && hp2 > 0)
        {
            cout << "tie" << endl;
        }
        else if(t1 < t2)
        {
            cout << "lose" << endl;
        }
        else if(t1 > t2)
        {
            cout << "win" << endl;
        }
    }
}
