#include<iostream>
#include <sstream>
using namespace std;
int main()
{
    string n;

    while(cin >> n)
    {

        if(n == "0")
        {

            return 0;
        }
        else
        {
            while(n.length() > 1)
            {



                int b;
                b = n.length();
                int c[b];

                for(int i = 0; i < b; i++)
                {



                    c[i] = n[i] - 48;
                }

                int sum = 0;

                for(int k = 0; k < b; k++)
                {
                    n[k] = '0';
                    sum = sum + c[k];
                }

                std::stringstream ss;
                ss << sum;
                ss >> n;


            }

            cout << n << endl;
        }

    }

}
