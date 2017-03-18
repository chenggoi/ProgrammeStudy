#include<iostream>
using namespace std;
struct S
{
    int cost, per[10000];
};
int main()
{
    int n, c, h, w;
    cin >> n >> c >> h >> w;
    S hotel[h], ch;

    for(int i = 0; i < h; i++)
    {
        cin >> hotel[i].cost;

        for(int j = 0; j < w; j++)
        {
            cin >> hotel[i].per[j];
        }
    }

    for(int i = 0; i < h; i++)
    {
        for(int j = i + 1; j < h; j++)
        {
            if(hotel[i].cost > hotel[j].cost)
            {
                ch = hotel[i];
                hotel[i] = hotel[j];
                hotel[j] = ch;
            }
        }
    }

    int sum = 0;

    for(int j = 0; j < h; j++)
    {
        for(int i = 0; i < w; i++)
        {
            if(hotel[j].per[i] >= n)
            {
                sum = hotel[j].cost * n;

                if(sum <= c)
                {
                    cout << sum << endl;
                    return 0;
                }
            }
        }
    }

    cout << "stay home" << endl;
    return 0;
}
