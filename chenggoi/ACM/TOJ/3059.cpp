#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int a, s1 = 0, s2 = 0;
        char w1, w2;
        cin >> a;

        for(int i = 0; i < a; i++)
        {
            cin >> w1 >> w2;

            if((w1 == 'P' && w2 == 'R') || (w1 == 'R' && w2 == 'S') || (w1 == 'S' && w2 == 'P'))
            {
                s1++;
            }
            else if((w2 == 'P' && w1 == 'R') || (w2 == 'R' && w1 == 'S') || (w2 == 'S' && w1 == 'P'))
            {
                s2++;
            }
        }

        if(s1 > s2)
        {
            cout << "Player 1" << endl;
        }
        else if(s2 > s1)
        {
            cout << "Player 2" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
}
