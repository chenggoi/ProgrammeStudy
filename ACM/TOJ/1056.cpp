#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;
int sum = 0;
char mp[1000][1000];
int mark[1000][1000];
struct W
{
    int x, y, stp;
} p[1000006], d, st1, st2;
void L(W st)
{
    sum = 0;
    int f = 0, r = 1, setp = 0;
    p[f].stp = setp;
    int fang[4][2] = {{1, 0}, { -1, 0}, {0, 1}, {0, -1}};
    p[f].x = st.x;
    p[f].y = st.y;
    memset(mark, 0, sizeof(mark));
    mark[p[f].x][p[f].y] = 1;

    while(f < r)
    {
        for(int i = 0; i < 4; i++)
        {
            int xx, yy; //cout<<p[f].x<<" "<<p[f].y<<"i";
            xx = p[f].x + fang[i][0];
            yy = p[f].y + fang[i][1];
            setp = p[f].stp;


            if(mark[xx][yy] == 0 && mp[xx][yy] == '.')
            {
                //cout<<xx<<"xx"<<yy<<" ";
                setp++;
                mark[xx][yy] = 1;
                p[r].x = xx;
                p[r].y = yy;
                p[r].stp = setp;

                if(sum < setp)
                {
                    sum = setp;
                    st2 = p[r]; //cout<<st2.x<<st2.y<<" ";
                }

                r++;
            }
        }

        f++;
    } return;
}
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int a, b, qq = 1;
        cin >> a >> b;
        sum = 0;
        memset(mp, '#', sizeof(mp));

        for(int i = 0; i < b; i++)
        {
            for(int j = 0; j < a; j++)
            {

                cin >> mp[i][j];

                if(mp[i][j] == '.' && qq)
                {
                    st1.x = i;
                    st1.y = j;
                    qq = 0;
                }
            }
        }

        L(st1);
        L(st2);
        cout << "Maximum rope length is " << sum << "." << endl;

    }
}
