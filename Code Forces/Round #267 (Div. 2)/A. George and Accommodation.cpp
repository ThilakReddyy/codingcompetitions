#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count =0;
    for (int i=0;i<n;i++)
    {
        int p,q;
        cin>>p>>q;
        if (p+1<q)
        {
            count=count+1;
        }
    }
    cout<<count;
}