#include <iostream>
using namespace std;
//typedef long long int ull;
int main()
{
    int n, result=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if (p == 1)
        {
            result = 1;
        }
    }
    if (result == 1)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}