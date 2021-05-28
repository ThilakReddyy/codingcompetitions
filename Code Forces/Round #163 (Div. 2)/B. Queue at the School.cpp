#include <bits/stdc++.h>
using namespace std;
typedef long long int ull;
int main()
{
    int n, t;
    cin >> n >> t; //scan the number of characters the string containes,the no of seconds
    string s;
    cin >> s;                   //scanning the loop
    for (int i = 0; i < t; i++) //for loop for no of seconds it should run
    {
        for (int j = 0; j < n - 1; j++) //for loop for no of characters in a string
        {
            if (s[j] == 'B' && s[j + 1] == 'G') // check the given condition
            {
                s[j] = 'G';
                s[j + 1] = 'B'; //swapping
                // char temp = s[j];
                // s[j] = s[j + 1];
                // s[j + 1] = temp;
                j++; //incrementing so that it does not get distrubed
            }
        }
    }
    cout << s;
}
