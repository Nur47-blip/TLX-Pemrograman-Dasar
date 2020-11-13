#include <bits/stdc++.h>

using namespace std;

bool cekprima(int n){
	bool prima = true;
	for (int i = 2; i*i <= n; i++){
		if (n%i == 0) prima = false;
	}
	
	if (prima) return true;
	else return false;
}

int main(){

	int n;
	cin >> n;
	
	bool pernah = false;
	
	for (int i = 2; i <= n; i++){
		if ((n%i==0)){
			int pangkat = 0;
			while (n%i==0){
				n /= i;
				pangkat++;
			}
			
			if (pernah){
				cout << " x ";
			}
			else pernah = true;
			
			if (pangkat > 1) cout << i << "^" << pangkat;
			else cout << i;
		}
	}

	cout << endl;
	
	return 0;
}

