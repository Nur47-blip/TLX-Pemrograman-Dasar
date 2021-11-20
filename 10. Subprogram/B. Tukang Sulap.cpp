#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	
	int arr1[n+1];
	int arr2[n+1];
	
	for (int i = 1; i <= n; i++){
		cin >> arr1[i];
	}
	
	for (int  i = 1; i <= n; i++){
		cin >> arr2[i];
	}
	
	int t;
	cin >> t;
	while (t--){
		char a, b;
		int x, y;
		cin >> a >> x >> b >> y;
		
		//saya tuliskan gini biar nggak bingung
		if (a=='A' and b=='A'){
			swap(arr1[x], arr1[y]);
		}
		
		else if (a=='A' and b=='B'){
			swap(arr1[x], arr2[y]);
		}
		
		else if (a=='B' and b=='A'){
			swap(arr2[x], arr1[y]);
		}
		
		else {
			swap(arr2[x], arr2[y]);
		}
	}
	
	for (int i = 1; i <= n; i++){
		cout << arr1[i];
		if (i < n) cout << " ";
		else cout << endl;
	}
	
	for (int i = 1; i <= n; i++){
		cout << arr2[i];
		if (i < n) cout << " ";
		else cout << endl;
	}

	return 0;
}
