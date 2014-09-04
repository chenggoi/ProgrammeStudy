#include<iostream>
#include<cstring>
using namespace std;
int s[1000000];
int F(int n)
{
    int sum=1;
    for(int i=0;i<n;i++)
    sum=sum*2;
    return sum;
}
int main()
{
    int n;
    while(cin>>n,n!=0)
    {
                      memset(s,0,sizeof(s));
                      int i=0;
                      while(n!=0)
                      {
                       s[i]=n%2;
                       i++;
                       n=n/2;
                       }
                       int sum=0,qq=0;

                       for(int j=0;j<i;j++)
                       {
                               if(qq==0&&s[j]==0)
                               {
                               continue;
                               }
                               else
                               {qq++;
                               sum=sum+s[j]*F(i-j-1);
                               }
                               }
                       cout<<sum<<endl;
                       }
                       }
