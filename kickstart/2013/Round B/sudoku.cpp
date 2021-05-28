#include <iostream>
using namespace std;
void solve(int T)
{
    int n;
    cin >> n;
    int a[n * n][n * n];
    for (int i = 0; i < n * n; i++)
    {
        for (int j = 0; j < n * n; j++)
        {
            cin >> a[i][j];
        }
    }
    int flag;
    for (int i = 0; i < n * n; i++)
    {
        for (int j = 1; j <= n * n; j++)
        {
            flag = 1;
            for (int k = 0; k < n * n; k++)
            {

                if (a[i][k] == j)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 0)
    {
        for (int i = 0; i < n * n; i++)
        {
            for (int j = 1; j <= n * n; j++)
            {
                flag = 1;
                for (int k = 0; k < n * n; k++)
                {

                    if (a[k][i] == j)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
    cout <<"Case #"<<T<<":  ";
    if (flag == 0)
    {
        cout << "Yes"<<endl;
    }
    else if (flag == 1)
    {
        cout << "No"<<endl;
    }
}
int main()
{

    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        solve(i);
    }

    return 0;
}