#include <iostream>
using namespace std;
#include <iomanip> 
#include <cmath>

void solve(int test)
{
    int V,D;
    cin >> V >> D;
     double pi =3.14159265359;
   double result = (asin(((9.8 * D) / (V * V)))) /2*180/pi;
    cout << "Case #" << test << ": ";
    cout<<fixed<<setprecision(7)<<result;
}
int main()
{
    int T;
    cin >> T;                             //taking in no of test cases
    for (int test = 1; test <= T; test++) //for loop for number of test cases
    {
        
        
       
        solve(test); //calls a function
        cout << endl;
    }
}