#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    set<int> setter;
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        setter.insert(n); 
    }
    cout<<4-setter.size();
    
}