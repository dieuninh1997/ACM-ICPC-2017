#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long Max=0;
	for(int i=3;i<=n;i=i+3){
		long long tong=0;
		for(int j=0;j<i;j++){
			tong =tong+a[j];
		}
		Max=max(Max,tong);
		for(int j=1;j<=n-i;j++){
			tong=tong-a[j-1]+a[j+i-1];
			Max=max(Max,tong);
		}
	}
	cout<<Max;
}
 int main()
{
//	freopen("input.txt","r",stdin);
	solve();
	return 0;
}

