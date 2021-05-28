#include <iostream>
using namespace std;
string a;
int count = 0, cp = 0;
int main()
{
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                cp++;
            }
        }
        if (cp == 0)
        {
            count++;
        }
        cp = 0;
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}