#include<iostream>
using namespace std;
int main()
{
    int n,qq=1;
    cin>>n;
    while(n--)
    {
              int a,b;
              cin>>a>>b;
              cout<<qq<<" ";
              int ma,mi;
              ma=max(a,b);
              mi=min(a,b);
              for(int i=1;i>0;i++)
              {
                      if((ma*i)%mi==0)
                      {
                                      cout<<ma*i<<" ";
                                      break;
                                      }
              }
              for(int i=mi;i>0;i--)
              {
                      if(mi%i==0&&ma%i==0)
                      {
                                          cout<<i<<endl;
                                          break;
                                          }
              }
              qq++;
              }
}
