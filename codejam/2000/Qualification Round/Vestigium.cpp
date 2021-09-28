#include <bits/stdc++.h>
using namespace std;
void solve(int test)
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int r=0,c=0;
    bool f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i][j]==arr[i][k])
                {
                    r=r+1;
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                f=0;
                break;
            }
        }
    }
    f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[j][i]==arr[k][i])
                {
                    c=c+1;
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                f=0;
                break;
            }
        }
    }
    int trace =0;
    for(int i=0;i<n;i++)
    {
        trace=trace+arr[i][i];
    }
    cout<<"Case #"<<test<<": "<<trace<<" "<<r<<" "<<c<<endl;
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
