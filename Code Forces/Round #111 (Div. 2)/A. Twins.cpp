#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n,ans=0,m=0,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		ans=ans+a[i];
		sum=sum-a[i];
		m++;
		if(ans>sum){
			cout<<m<<endl;
			return 0;	
		}
	}		
} 