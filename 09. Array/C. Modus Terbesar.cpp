#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n;
	int arr[100001],mod,ind;
	mod=-INT_MAX;
	ind=-INT_MAX;
	for (int j=1;j<=n;j++){
		cin>>m;
		arr[m]++;
		if (arr[m]>mod){
			ind=m;
			mod=arr[m];
		}
		else if (arr[m]==mod && m>ind){
			ind=m;
			mod=arr[m];
		}
	}
	cout<<ind<<endl;
}
