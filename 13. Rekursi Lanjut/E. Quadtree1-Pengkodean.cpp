#include <bits/stdc++.h>

using namespace std;

int ans = 0;
vector<string> sol;
char arr[200][200];

void solve(int a, int b, int c, int d, string temp){
	temp[0] = arr[a][b];
	char cek = temp[0];
	bool flag = true;
	for (int i = a; i <= c; i++){
		for (int j = b; j <= d; j++){
			if (arr[i][j] != cek){
				flag = false;
				break;
			}
		}
		if (!flag) break;
	}
	
	if (!flag){
		
		//kalau tidak homogen, pecah jadi 4
		
		//pojok kiri atas
		solve(a, b, (a+c)/2, (b+d)/2, temp+"0");
		
		//pojok kanan atas
		solve(a, (b+d)/2+1, (a+c)/2, d, temp+"1");
		
		//pojok kiri bawah
		solve((a+c)/2+1, b, c, (b+d)/2, temp+"2");
		
		//pojok kanan bawah
		solve((a+c)/2+1, (b+d)/2+1, c, d, temp+"3");
	}
	else {
		if (temp[0] == '1'){
			ans++;
			sol.push_back(temp);
		}
	} 
}

int main(){

	int a, b;
	cin >> a >> b;
	
	int c = max(a,b);
	
	memset(arr, '0', sizeof arr);
	
	int sz = 1;
	while (sz < c){
		sz *= 2;
	}
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> arr[i][j];
		}
	}
	
	
	solve(0, 0, sz-1, sz-1, "1");
	
	sort(sol.begin(), sol.end());
	
	cout << ans << endl;
	
	for (int i = 0; i < ans; i++){
		cout << sol[i] << endl;
	}

	return 0;
}

