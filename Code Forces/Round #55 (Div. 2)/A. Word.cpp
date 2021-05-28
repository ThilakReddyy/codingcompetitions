#include <bits/stdc++.h>
using namespace std;
typedef long long int ull;
int main()
{
    string s;
    int lower=0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > 96)
        {
            lower = lower + 1;
        }
    }
    if (lower >= s.length() / 2 && s.length()%2==0)
    {
        for (int i = 0; i < s.length(); i++)
        {
           s[i]=tolower(s[i]);
        }
    }
    else if (lower > s.length() / 2 && s.length()%2!=0)
    {
        for (int i = 0; i < s.length(); i++)
        {
           s[i]=tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
           s[i]=toupper(s[i]);
        }
    }
    cout<<s;
}
