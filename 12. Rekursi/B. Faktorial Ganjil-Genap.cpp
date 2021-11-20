#include <bits/stdc++.h>

using namespace std;

int fact(int x){
	if (x==1) return 1;
	else{
		if (x%2==0) return x/2*fact(x-1);
		else return x*fact(x-1);
	}
}

int main(){

	int n;
	cin >> n;
	
	cout << fact(n) << endl;
	

	return 0;
}

