#include <bits/stdc++.h>

using namespace std;


int reverse(int x){
	int ans = 0;
	while (x > 0){
		ans *= 10;
		ans += (x%10);
		x/=10;
	}
	
	return ans;
}

int main(){

	int a, b;
	cin >> a >> b;
	
	int ans = reverse(a) + reverse(b);
	
	cout << reverse(ans) << endl;

	return 0;
}

