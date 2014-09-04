#include<iostream>
using namespace std;
int main()
{
    int n,qq=1;
    cin>>n;
    while(n--)
    {
              int a;
              cin>>a;
              string s;
              int sum=0;
              string d="sheep";
              for(int i=0;i<a;i++)
              {
                      cin>>s;
                      if(s==d)
                      sum++;
                      }
              cout<<"Case "<<qq<<": This list contains "<<sum<<" sheep."<<endl;
              if(n!=0)
              cout<<endl;
              qq++;
              }
              }
