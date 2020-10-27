#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int n;
	
	cin>>n;
	
	while (n%2==0){
		n=n/2;
	}
	
	if (n!=1) cout<<"bukan\n";
	else cout<<"ya\n";

return 0;
}
