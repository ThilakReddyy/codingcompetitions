#include <bits/stdc++.h>
using namespace std;
void solve(int test)
{
    string n;
    cin>>n;
    string st;
    for(int i=0;i<(int)n[0]-48;i++)
    {
      st=st+'(';
    }
    st=st+n[0];
    for(int i=1;i<n.size();i++)
    {
      
      int p=n[i]-n[i-1];
     
      if(p>0)
      {
         for(int j=0;j<p;j++)
         {
            st=st+'(';
         }
      }
      else if(p<0)
      {
         for(int j=0;j<abs(p);j++)
         {
            st=st+')';
         }
      }
      st=st+n[i];
    }
    for(int i=0;i<(int)n[n.size()-1]-48;i++)
    {
      st=st+')';
    }
   cout<<"Case #"<<test<<": "<<st<<endl;
   
}
int  main()
{
   int test;
   cin>>test;
   for(int i=1;i<=test;i++)
   {
    solve(i);
   }
}
