#include <bits/stdc++.h>

using namespace std;

char arr[200][200];
int sz = 1;

void isi(string s){
	int len = s.length();
	
	int a = 0, b = 0, x = sz-1, y = sz-1;
	
	for (int i = 1; i < len; i++){
		if (s[i] == '0'){
			x = (a+x)/2;
			y = (b+y)/2;
		}
		else if (s[i] == '1'){
			b = (b+y)/2+1;
			x = (a+x)/2;
		}
		else if (s[i] == '2'){
			a = (a+x)/2+1;
			y = (b+y)/2;
		}
		else {
			a = (a+x)/2+1;
			b = (b+y)/2+1;
		}
	}
	
	for (int i = a; i <= x; i++){
		for (int j = b; j <=y; j++){
			arr[i][j] = '1';
		}
	}
	
}

int main(){

	memset(arr, '0', sizeof arr);
	
	int n;
	cin >> n;
	
	vector<string> v;
	
	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}

	int a, b;
	cin >> a >> b;
	
	int c = max(a,b);
	
	while (sz < c){
		sz *= 2;
	}
	
	for (int i = 0; i < n; i++){
		isi(v[i]);
	}

	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << arr[i][j];
			if (j < b-1) cout << ' ';
			else cout << endl;
		}
	}

	return 0;
}

