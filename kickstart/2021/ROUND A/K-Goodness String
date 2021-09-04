#include <bits/stdc++.h>
using namespace std;
void solve(int test)
{
    int N, K, p;
    string S;
    cin >> N >> K;
    cin >> S;
    int score = 0;
    if (N % 2 == 0)
    {
        p = N / 2;
    }
    else
    {
        p = N / 2 + 1;
    }
    for (int j = 0; j < p; j++)
    {
        if (S[j] != S[N - j - 1])
        {
            score = score + 1;
        }
    }

    if (score < K)
    {
        score = K - score;
    }
    else if (score == K)
    {
        score = 0;
    }
    if (score > K)
    {
        score = score - K;
    }
    cout << "Case #" << test << ": " << score << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        solve(test);
    }
}
