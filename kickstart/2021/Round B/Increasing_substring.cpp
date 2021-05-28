#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int test = 1; test <= T; test++)
    {
        int N;
        
        cin >> N;
        char S[N];
        int count = 1;
        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }
        cout<<"Case #"<<test<<": ";
        for (int i = 1; i < N; i++)
        {
            if (S[i] > S[i - 1])
            {
                count = count + 1;
            }
            else
            {
                for (int j = 1; j <= count; j++)
                {
                    cout << j << " ";
                }

                count = 1;
            }
        }
        for (int j = 1; j <= count; j++)
        {
            cout << j << " ";
        }
        count = 1;
        cout << endl;
    }
    return 0;
}