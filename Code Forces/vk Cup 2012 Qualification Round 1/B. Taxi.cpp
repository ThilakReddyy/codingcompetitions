#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);
    int l = n - 1;
    int k = 0, m = 1;
    while (k != l)
    {
        if (p[l] + p[k] <= 4)
        {
            p[l] += p[k];
            k++;
        }
        else
        {
            l--;
            m++;
        }
    }
    cout<<m;
}