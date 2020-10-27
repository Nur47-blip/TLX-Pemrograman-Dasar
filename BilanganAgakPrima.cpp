#include <bits/stdc++.h>

using namespace std;

int main()
{
int x;
cin>>x;

for (int j=1;j<=x;j++){
	int n;
	int k=0;
	
	cin>>n;
	
	for (int i=2; i<=sqrt(n);i++){
		if (n%i==0) k++;
	}
	
	if (k>1) cout<<"BUKAN\n";
	else cout<<"YA\n";
}
return 0;
}
