#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main()
{
    ull n;
    cin >> n;
    string s;
    cin >> s;
    int acount=0,dcount=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='A')
        {
            acount=acount+1;
        }
        else if (s[i]=='D')
        {
            dcount=dcount+1;
        }
    }
    if (acount>dcount)
    {
        cout<<"Anton";
    }
    else if (acount<dcount)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}