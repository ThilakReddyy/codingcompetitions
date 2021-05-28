#include<iostream>
using namespace std;
int main()
{
	string s;
    bool p =false;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            p=true;
            break;
        }
    }
    if (p == true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
} 