#include <bits/stdc++.h>

using namespace std;

void permutasi(int n, int maxk, int k, int arr[], int minimal){
	if (k > maxk){
		for (int i = 1; i < k; i++){
			cout << arr[i];
			if (i < k-1) cout << " ";
			else cout << endl;
		}
	}
	else {
		for (int i = 1; i <= n; i++){
			if (i > minimal){
				arr[k] = i;
				permutasi(n, maxk, k+1, arr, i);
			}	
		}
	}
}

int main(){
	
	int n, k;
	cin >> n >> k;
	
	int arr[k+1];
	
	permutasi(n, k, 1, arr, 0);

	return 0;
}

