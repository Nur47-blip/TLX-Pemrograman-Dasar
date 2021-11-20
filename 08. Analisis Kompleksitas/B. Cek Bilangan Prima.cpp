#include <bits/stdc++.h>

using namespace std;;

int main(){

	int t;
	cin>>t;
	
	while (t--) {
		int n;
		cin>>n;
		
		bool ada=false;
		for (int i=2;i*i<=n;i++){
			if (n%i==0){
				ada=true;
			}
		}
		
		if (!ada and n!=1) cout<<"YA\n";
		else cout<<"BUKAN\n";
	}

	return 0;
}
