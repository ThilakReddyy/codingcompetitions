#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    ull n;
    cin>>n;
    ull p[n];
    int count=0;
    for (int i=0;i<n;i++)
    {
        cin>>p[i];
        if ( p[i]!=p[i-1])
        {
                count=count+1;
        }
    }
    cout<<count;
    
}