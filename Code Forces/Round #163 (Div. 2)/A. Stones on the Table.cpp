#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (S[i] == S[j])
        {

            count = count + 1;
            j++;
        }
        i = j - 1;
    }
    cout << count;
    return 0;
}