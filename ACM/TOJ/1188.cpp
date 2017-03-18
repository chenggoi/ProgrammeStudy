#include<iostream>
#include<algorithm>
using namespace std;
int a[1010], b[1010];

int main()
{
    int n, i;

    while(cin >> n, n != 0)
    {
        a[0] = b[0] = 0;

        for(i = 1; i <= n; i++) { cin >> a[i]; }

        for(i = 1; i <= n; i++) { cin >> b[i]; }

        sort(a, a + n + 1); sort(b, b + n + 1);
        int begin_a = 1, begin_b = 1, end_a = n, end_b = n, sum = 0;

        for(i = 1; i <= n; i++)
        {
            if(a[begin_a] > b[begin_b])
            {
                sum++, begin_a++, begin_b++;
            }
            else if(a[begin_a] < b[begin_b])
            {
                sum--, begin_a++, end_b--;
            }
            else if(a[end_a] > b[end_b])
            {
                sum++, end_a--, end_b--;
            }
            else if(a[end_a] < b[end_b])
            {
                sum--, begin_a++, end_b--;
            }
            else if(a[begin_a] < b[end_b])
            {
                sum--, begin_a++, end_b--;
            }
        }

        cout << sum * 200 << endl;
    }

    return 0;
}
