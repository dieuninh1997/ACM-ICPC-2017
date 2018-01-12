#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
    cin >> n;
    cout << __builtin_popcountll(n)%2 << __builtin_popcountll(n+1)%2 << __builtin_popcountll(n+2)%2;
	
}
 int main()
{
//	freopen("input.txt","r",stdin);
	solve();
	return 0;
}

