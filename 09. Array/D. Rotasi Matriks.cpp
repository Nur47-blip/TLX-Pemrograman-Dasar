#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a,b;
	cin>>a>>b;
	int arr[101][101];
	for (int i=1;i<=a;i++){
		for (int j=1;j<=b;j++){
			cin>>arr[i][j];
		}
	}
	
	for (int j=1;j<=b;j++){
		for (int i=a;i>=1;i--){
			cout<<arr[i][j];
			if (i>1) cout<<' ';
			else cout<<endl;
		}
	}

return 0;
}
