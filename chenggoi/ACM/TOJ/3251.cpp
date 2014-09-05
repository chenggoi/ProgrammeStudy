#include<iostream>
using namespace std;
int main()
{
    int M[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string D[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    int d, m, sum = 0;
    cin >> d >> m;

    for(int i = 0; i < m - 1; i++)
    {
        sum = sum + M[i];
    }

    sum = sum + d;
    cout << D[sum % 7] << endl;

}
