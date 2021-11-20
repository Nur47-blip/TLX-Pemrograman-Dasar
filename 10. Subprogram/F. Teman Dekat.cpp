#include <bits/stdc++.h>

using namespace std;

int pangkat(int a, int b){
	int ans = 1;
	for (int i = 1; i <= b; i++){
		ans *= a;
	}
	return ans;
}

int main(){

	int n, d;
	cin >> n >> d;
	
	vector<pair<int,int>> siswa(n); // jangan takut sama vector dan pair XD. ini konsepnya simpel kok.
									// soal ini bisa dikerjakan tanpa vector dan pair sih... ini biar lebih gampang aja codingnya
									
	for (int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		siswa[i].first = a;
		siswa[i].second = b;
	}
	
	int minimum = INT_MAX;
	int maximum = INT_MIN;

	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			
			int selisihx = abs(siswa[i].first-siswa[j].first);
			int selisihy = abs(siswa[i].second-siswa[j].second);
			int kedekatan = pangkat(selisihx, d) + pangkat(selisihy, d);
			
			minimum = min(minimum, kedekatan);
			maximum = max(maximum, kedekatan);
		}
	}
	
	cout << minimum << " " << maximum << endl;
	return 0;
}
