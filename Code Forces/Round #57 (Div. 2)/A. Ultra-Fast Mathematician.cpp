#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    string n, p,a="";
    cin >> n >> p;
    for (int i=0;i<n.length();i++)
    {
        if (n[i]==p[i])
        {
            a=a+"0";
        }
        else
        {
            a=a+"1";
        }
    }
    cout<<a;
   
}