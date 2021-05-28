#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    int k,w;
    ull n;
    cin>>k>>w>>n;
    ull b =  ((n*(n+1))/2)*k;
    ull c=b-w;
    if (c>=0)
    {
        cout<<c;
    }
    else
    {
        cout<<0;
    }
    
    
}