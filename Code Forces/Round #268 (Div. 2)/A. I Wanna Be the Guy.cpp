#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n >> p;
    set<int> setter;
    int a;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        setter.insert(a);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        setter.insert(a);
    }
    if (setter.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}
