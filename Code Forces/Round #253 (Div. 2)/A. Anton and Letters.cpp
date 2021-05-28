#include <iostream>
#include<set>
#include <string>
using namespace std;
int main()
{
    set<char>distinct;
    string s;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>96 && s[i]<123)
        {
            distinct.insert(s[i]);
        }
    }
    cout<<distinct.size();
    
}