#include <bits/stdc++.h>

using namespace std;

int reverse(int x){
	int temp = x;
	int ans = 0;
	
	while (temp > 0){
		ans = ans*10 + temp%10;
		temp /= 10;
	}
	
	return ans;
}

int main(){

	int a, b;
	cin >> a >> b;
	
	int ans = reverse(a)+reverse(b);
	
	cout << reverse(ans) << endl;

	return 0;
}
