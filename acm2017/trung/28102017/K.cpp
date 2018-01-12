#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long n,m;
	cin>>m>>n;
	if(n<m||n%2!=0||m%2!=0||(n-m)%2!=0){
		cout<<"IMPOSSIBLE";
	}else{
		long long a,b;
		a=(n-m)/2;
		b=m/2-a;
		if((a+b)*2==m&&(2*a+b)*2==n&&a>=0&&b>=0){
			cout<<a<<" "<<b;
		}else{
			cout<<"IMPOSSIBLE";
		}
		
	}
}
 int main()
{
//	freopen("input.txt","r",stdin);
	solve();
	return 0;
}

