#include<iostream>
#include<algorithm>
bool com(int &a, int &b)
{
    return a > b;
}
using namespace std;
int main()
{
    int n1;
    cin >> n1;

    while(n1--)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            push_heap(a, a + i + 1, com);
        }

        int m = n - 1, a1 = 0, sum = 0;

        for(int i = 0; i < n - 1; i++)
        {
            pop_heap(a, a + m + 1, com);
            a1 = a1 + a[m];
            pop_heap(a, a + m, com);
            m--;
            a1 = a1 + a[m];
            sum = sum + a1;
            a[m] = a1;
            m++;
            push_heap(a, a + m, com);
            m--;
            a1 = 0;
        }

        cout << sum << endl;
    }

}
