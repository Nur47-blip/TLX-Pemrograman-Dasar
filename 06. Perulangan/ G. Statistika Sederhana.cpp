#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	int max=-INT_MAX;
	int min=INT_MAX;
	cin>>n;
	for (int i=1;i<=n;i++){
		int j;
		cin>>j;
		if (j>max) max=j;
		if (j<min) min=j;
	}
	
	cout<<max<<" "<<min<<endl;

return 0;
}
