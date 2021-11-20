#include <bits/stdc++.h>

using namespace std;

bool cekzigzag(int n, int arr[]){
	if (n<3) return true;

	for (int i = 2; i < n; i++){
		if (arr[i-1] < arr[i] and arr[i] < arr[i+1]) return false;
		if (arr[i-1] > arr[i] and arr[i] > arr[i+1]) return false;
	}
	
	return true;
}

void permutasi(int n, int k, int arr[], bool pernah[]){
	if (k > n){
		if (cekzigzag(n, arr)){
			for (int i = 1; i <= n; i++){
				cout << arr[i];
			}
			cout << endl;
		}
	}
	else {
		for (int i = 1; i <= n; i++){
			if (!pernah[i]){
				pernah[i] = true;
				arr[k] = i;
				permutasi(n, k+1, arr, pernah);
				pernah[i] = false;
			}
		}
	}
}

int main(){

	int n;
	cin >> n;
	
	//index array mulai dari 1
	
	int arr[n+1];
	bool pernah[n+1];
	memset(pernah, false, sizeof pernah);
	
	permutasi(n, 1, arr, pernah);

	return 0;
}

