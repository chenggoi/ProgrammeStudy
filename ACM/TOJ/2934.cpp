#include<iostream>
#include<algorithm>
using namespace std;
struct cw
{
    long long int a, b, id;
};
bool r1(cw x, cw y)
{
    return x.a > y.a;
}
bool r2(cw x, cw y)
{
    return x.b > y.b;
}
int main()
{
    cw cws[50001];
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> cws[i].a >> cws[i].b;
        cws[i].id = i + 1;
    }

    sort(cws, cws + n, r1);
    sort(cws, cws + k, r2);
    cout << cws[0].id << endl;
    return 0;
}
