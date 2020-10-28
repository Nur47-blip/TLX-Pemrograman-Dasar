#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	cin >> s;
	
	int n;
	cin >> n;
	
	int len = s.length();
	
	for (int i = 0; i < len; i++){
		int alphabet = s[i] - 'a';
		alphabet = (alphabet + n) % 26; // kalau bingung yang ini, baca tentang ASCII Code
		
		s[i] = 'a' + alphabet;
	}
	
	cout << s << endl;

	return 0;
}
