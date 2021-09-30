#include <bits/stdc++.h>
using namespace std;
void solve(int test)
{
  int p;
  cin>>p;
  string answer="";
  string n; 
  cin>>n;
  for(int i=0;i<n.size();i++)
  {
    if(n[i]=='S')
    {
      answer=answer+'E';
    }
    else
    {
      answer=answer+'S';
    }
  }
  cout<<"Case #"<<test<<": "<<answer<<endl;
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
