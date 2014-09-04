#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
              string a,b;

              cin>>a>>b;
              int x,y;
              x=a.length();
              y=b.length();
              if(x<y)
              cout<<"NO BRAINS"<<endl;
              else
              {
               if(x>y)
              cout<<"MMM BRAINS"<<endl;
              else
              {
                  for(int i=0;i<x;i++)
                  {
                          if(a[i]>b[i])
                          {cout<<"MMM BRAINS"<<endl;goto loop;}
                          else if(a[i]<b[i])
                          {cout<<"NO BRAINS"<<endl;goto loop;}
                  }
              cout<<"MMM BRAINS"<<endl;
              loop:;
              }
              }
              }
              }
