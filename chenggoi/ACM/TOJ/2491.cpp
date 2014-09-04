#include<iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s,s!=".")
    {
     int a,n;
     cin>>a;
     n=s.length();
     for(int i=0;i<n;i++)
     {
             for(int j=0;j<a;j++)
             cout<<s;
             cout<<endl;
             char ch=s[0];
             for(int k=1;k<n;k++)
             {
                     s[k-1]=s[k];
                     }
             s[n-1]=ch;
             }
             }
             }
