#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n,m,p;
	cin>>n>>m>>p;
	int arr1[n+1][m+1], arr2[m+1][p+1], x;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++) cin>>arr1[i][j];
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=p;j++) cin>>arr2[i][j];
	}
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=p;j++){
		
		x=0;
		for (int k=1;k<=m;k++) x=x+arr1[i][k]*arr2[k][j];
		cout<<x;
		if (j<p) cout<<' ';
	}
	cout<<endl;
	}

return 0;
}
