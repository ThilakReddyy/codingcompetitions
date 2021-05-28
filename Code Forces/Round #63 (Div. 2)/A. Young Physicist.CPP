#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,y,z,xsum=0,ysum=0,zsum=0;
    cin>>a;
    for (int i=0;i<a;i++)
    {
        cin>>x>>y>>z;
        xsum=xsum+x;
        ysum=ysum+y;
        zsum=zsum+z;
    }
    if (xsum ==0 && ysum ==0 && zsum ==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}