#include <bits/stdc++.h>

using namespace std;

//int A[1001], B[1001];

void tukar(char x, int m, char y, int n, int *A, int *B){
	if (x=='A'){
		if (y=='B'){
			swap(A[m], B[n]);
		}
		else if (y=='A'){
			swap(A[m], A[n]);
		}
	}
	else {
		if (y=='B'){
			swap(B[m], B[n]);
		}
		else {
			swap(B[m], A[n]);
		}
	}
}

int main(){

	int n;
	cin >> n;
	
	int A[n], B[n];
	
	for (int i = 1; i <= n; i++){
		cin >> A[i];
	}
	
	for (int i = 1; i <= n; i++){
		cin >> B[i];
	}
	
	int t;
	cin >> t;
	
	while (t--){
		char x,y;
		int m,n;
		
		cin >> x >> m >> y >> n;
		
		tukar(x,m,y,n, A, B);
	}

	for (int i = 1; i <= n; i++){
		cout << A[i];
		if (i < n) cout << " ";
		else cout << endl;
	}

	for (int i = 1; i <= n; i++){
		cout << B[i];
		if (i < n) cout << " ";
		else cout << endl;
	}
	return 0;
}

