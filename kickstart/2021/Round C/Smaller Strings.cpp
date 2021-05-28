#include <bits/stdc++.h>
using namespace std;
const int32_t M=1e9+7;
int pw(int a,int p=M-2,int MOD=M){
	int result = 1;
	while (p > 0) {
		if (p & 1)
			result = a * result % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return result;
}
void solve(int test)
{
    cout<<"Case #"<<test<<": ";
    int n,k;
    string s;
    cin>>n>>k>>s;
    int m=(n+1)/2,ans=0;
    for (int i=0;i<m;i++)
    {
        char c=s[i];
        int d=(c-'a');
        ans = (ans + d * pw(k,m-1-i)) % M;
    }
    
    string t;
	for (int i=0;i<m;i++)
    {
        t.push_back(s[i]);
    } 
	for (int i=0;i<n-m;i++){
		t.push_back(s[n-m-1-i]);
	}
	// cout << t << "\n";
	
	if(t < s) ans++;
	ans = ans % M;
	
	cout << ans;
    cout<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test; 
    cin>>test;
    for (int i=1;i<=test;i++)
    {
        solve(i);
    }   
    return 0;
}