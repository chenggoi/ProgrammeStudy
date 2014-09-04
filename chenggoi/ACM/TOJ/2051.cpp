#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<168)
    {
             cout<<"CRASH "<<endl;
             return 0;
             }
    if(b<168)
    {
             cout<<"CRASH "<<b<<endl;
             return 0;
             }
    if(c<168)
    {
             cout<<"CRASH "<<c<<endl;
             return 0;
             }
    cout<<"NO CRASH"<<endl;
}
