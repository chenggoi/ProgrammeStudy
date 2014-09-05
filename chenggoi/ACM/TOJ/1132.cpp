#include<iostream>
using namespace std;
int ans = 0;
struct S
{
    int st, x, y;
} p[1000000], e, d1, d2;
int F(S a, S b)
{
    int K[8][2] = {{ -2, -1}, { -1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, { -1, 2}, { -2, 1}};
    p[0] = a;
    int f = 0, r = 1, stp = 0;

    while(1)
    {
        int xx, yy;
        stp = p[f].st;
        stp++;

        for(int i = 0; i < 8; i++)
        {
            if((p[f].x + K[i][0] < 0) || (p[f].x + K[i][0] > 7) || (p[f].y + K[i][1] < 0) || (p[f].y + K[i][1] > 7))
            {
                continue;
            }

            xx = p[f].x + K[i][0];
            yy = p[f].y + K[i][1];
            p[r].x = xx;
            p[r].y = yy;
            p[r].st = stp;

            if(xx == b.x && yy == b.y)
            {
                return p[r].st;
            }

            r++;
        }

        f++;
    }
}
int main()
{
    string a, b;

    while(cin >> a >> b)
    {
        if(a == b)
        {
            cout << "To get from " << a << " to " << b << " takes 0 knight moves." << endl;
            continue;
        }

        d1.x = a[0] - 'a';
        d1.y = a[1] - 49;
        d1.st = 0;
        d2.x = b[0] - 'a';
        d2.y = b[1] - 49;
        ans = F(d1, d2);
        cout << "To get from " << a << " to " << b << " takes " << ans << " knight moves." << endl;
    }
}
