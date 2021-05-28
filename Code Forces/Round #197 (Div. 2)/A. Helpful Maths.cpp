#include <bits/stdc++.h>
using namespace std;
int main()
{
   string S;
   cin>>S;
   vector<char>c;
   for (int i=0;i<S.length();i++)
   {
       if (i%2==0)
       {
           c.push_back(S[i]);
       }
   }
   sort(c.begin(), c.end());
    for (int i=0;i<c.size();i++)
   {
       cout<<c[i];
       if (i<c.size()-1)
       {
           cout<<"+";
       }
   }

    return 0;
}