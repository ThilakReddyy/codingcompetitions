#include <bits/stdc++.h>
#include<cstring>
using namespace std;
void toggle(string& str)
{
    int length = str.length();
    for (int i = 0; i < length; i++) {
        int c = str[i];
        if (islower(c)) 
            str[i] = toupper(c);
              
    }
}
int main()
{
    string S,T;
    cin>>S>>T;
    toggle(S);
    toggle(T);
    if (S>T)
    {
        cout<<1;
    }
    else if(S<T)
    {
        cout<<-1;
    }
      else if(S==T)
    {
        cout<<0;
    }
}
