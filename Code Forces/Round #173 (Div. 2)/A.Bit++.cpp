#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M,count = 0;
    cin >> M;
    string S;
    for (int i = 0; i < M; i++)
    {
        cin >> S;
        if (S == "++X" || S == "X++")
        {
            count = count + 1;
        }
        else
        {
            count = count - 1;
        }
    }
    cout << count;
}
