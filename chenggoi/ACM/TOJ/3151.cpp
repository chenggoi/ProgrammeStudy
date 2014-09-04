#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,qq=1;
    cin>>n;
    while(n--)
    {
     getchar();
     string s;
     getline(cin,s);
     string a;
     cin>>a;
     cout<<qq<<" ";
     for(int i=0;i<s.length();i++)
     {


                      if(s[i]==' ')
                      cout<<" ";
                      else
                      {
                          int f;
                          f=s[i]-65;
                      cout<<a[f];
                      }
                      }
     cout<<endl;
     qq++;
     }
     }
