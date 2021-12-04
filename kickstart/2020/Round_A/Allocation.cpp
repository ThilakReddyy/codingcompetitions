#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	sort(arr,arr+n);
	int sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(sum+arr[i]>k)
		{
			break;
		}
		sum=sum+arr[i];
	}
	cout<<i;
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Case #"<<i<<": ";
		solve();
		cout<<endl;
	}
	//solve();
	
}
