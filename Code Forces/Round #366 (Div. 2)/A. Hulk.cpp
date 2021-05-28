#include <iostream>
using namespace std;
//typedef long long int ull;
int main()
{
    int n;
    cin>>n;
    if (n>=1)
    {
        cout<<"I hate";
    }
    for (int i=1;i<n;i++)
    {
        if (i%2!=0)
        {
             cout<<" that I love";
        }
        else
        {
            cout<<" that I hate";
        }
    }
    cout<<" it";
}