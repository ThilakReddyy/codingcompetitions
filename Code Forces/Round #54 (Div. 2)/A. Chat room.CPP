#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool managable = false;
    string s, c = "hello";
    int j = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c[j])
        {
            j = j + 1;
        }
        if (j == 5)
        {
            managable = true;
            break;
        }
    }
    if (managable == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}