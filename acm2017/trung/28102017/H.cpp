#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,a,c,b;
	cin>>n;
	int dem=0;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(a==n||b==n||c==n)
			dem++;
	}
	cout<<dem;
}
 int main()
{
//	freopen("input.txt","r",stdin);
	solve();
	return 0;
}

