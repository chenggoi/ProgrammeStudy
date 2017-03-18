#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int a, b;
        cin >> a >> b;

        if(a == 0)
        {
            cout << "0" << endl;
            continue;
        }

        int x[a + 1];

        for(int i = 0; i < a + 1; i++)
        {
            x[i] = i;
        } int w[b], q[b];

        for(int i = 0; i < b; i++)
        {

            cin >> w[i] >> q[i];

            if(q[i] > w[i])
            {
                int chang;
                chang = w[i];
                w[i] = q[i];
                q[i] = chang;
            }
        }

        for(int i = 0; i < b; i++)
        {
            for(int j = 0; j < b; j++)
            {
                int tr, tb;

                if(w[i] > w[j])
                {
                    tr = w[i];
                    tb = q[i];
                    w[i] = w[j];
                    w[j] = tr;
                    q[i] = q[j];
                    q[j] = tb;
                    j = -1;
                }
            }
        }

        int ch[a];

        for(int i = 0; i < a; i++)
        {
            ch[i] = 0;
        }

        for(int i = 0; i < b; i++)
        {
            //cout<<"w"<<w[i]<<" "<<q[i]<<" "<<x[i]<<endl;
            if(ch[q[i]] == 0)
            {
                x[q[i]] = x[w[i]];
                ch[w[i]]++;
                ch[q[i]]++;
            }
            else
            {
                if(ch[w[i]] == 0)
                {
                    x[w[i]] = x[q[i]];
                    ch[q[i]]++;
                    ch[w[i]]++;
                }
                else
                {
                    int sf;
                    sf = x[q[i]];

                    for(int j = 0; j < a + 1; j++)
                    {
                        if(x[j] == sf)
                        {
                            ch[w[i]]++;
                            ch[q[i]]++;
                            x[j] = x[w[i]];
                            //cout<<"j"<<j<<x[j]<<endl;
                        }
                    }
                }
            }
        }

        //for(int i=1;i<a+1;i++)
        // cout<<x[i]<<endl;
        int c[101] = {0};
        c[0] = x[1];
        int e = 1;

        for(int i = 2; i < a + 1; i++)
        {
            int r = 0;

            for(int j = 0; j < e; j++)
            {
                if(x[i] == c[j])
                {

                    r++;

                }
            }

            if(r == 0)
            {
                c[e] = x[i];
                e++;
            }
        }

        //for(int i=0;i<e;i++)
        //cout<<"e"<<c[i]<<endl;
        cout << e << endl;
    }
}
