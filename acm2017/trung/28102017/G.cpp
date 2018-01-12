#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	char x;
	int a[100][100],dem=0,flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>x;
			if(x=='.'){
				a[i][j]=0;
			}else{
				a[i][j]=1;
				dem++;
			}
		}
	}
	if(dem==0){
		cout<<0;
	}else{
		
	
//	cout<<dem<<endl;
		tt:
					for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"@@@@@@@@@\n";
		int max1=0,max2=0,vt1,vt2;
		for(int i=0;i<n;i++){
			int t1=0;
			for(int j=0;j<m;j++){
				t1=t1+a[i][j];				
			
			}
			if(t1>max1){
				max1=t1;
				vt1=i;
			}
		}
		for(int i=0;i<m;i++){
			int t1=0;
			for(int j=0;j<n;j++){
				t1=t1+a[j][i];				
			
			}
			if(t1>max2){
				max2=t1;
				vt2=i;
			}
		}
		if(max1>=max2){
			for(int i=0;i<m;i++){
				a[vt1][i]=0;
				
			}
			dem=dem-max1;
		}else{
			for(int i=0;i<n;i++){
				a[i][vt2]=0;
			
			}
				dem=dem-max2;
		}
		flag++;
		while(dem!=0){
//			cout<<dem<<endl;
			
			goto tt;
		}
//		cout<<max1<<" "<<vt1<<" "<<max2<<" "<<vt2<<dem;
	cout<<flag;

}
}
 int main()
{
//	freopen("input.txt","r",stdin);
	solve();
	return 0;
}

