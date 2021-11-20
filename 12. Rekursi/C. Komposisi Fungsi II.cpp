#include <bits/stdc++.h>

using namespace std;

int f(int a, int b, int k , int x){
	if (k==1) return abs(a*x+b);
	else {
		return f(a, b, k-1, abs(a*x+b));
	}
}

int main(){

	int a, b, k, x;
	cin >> a >> b >> k >> x;
	
	cout << f(a, b, k, x) << endl;

	return 0;
}

