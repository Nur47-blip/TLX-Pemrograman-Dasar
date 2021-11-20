#include <bits/stdc++.h>

using namespace std;

bool cekpalindrom(string s, int n){
	if (n==0 or n==1) return true;
	else {
		if (s[0] != s[n-1]) return false;
		else {
			string temp = "";
			for (int i = 1; i < n-1; i++){
				temp += s[i];
			}
			return cekpalindrom(temp, n-2);
		}
	}
}

int main(){

	string s;
	cin >> s;
	
	int len = s.length();
	
	if (cekpalindrom(s, len)) cout << "YA\n";
	else cout << "BUKAN\n";
	
	return 0;
}

