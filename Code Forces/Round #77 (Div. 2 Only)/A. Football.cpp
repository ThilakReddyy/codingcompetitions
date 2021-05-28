#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0, temp = 0, hell = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            if (temp == 1)
            {
                temp = 0;
                count = 0;
            }
            count = count + 1;
        }
        else
        {
            if (temp == 0)
            {
                temp = 1;
                count = 0;
            }
            count = count + 1;
        }
        if (count >= 7)
        {
            hell = 1;
            break;
        }
    }
    if (hell == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}