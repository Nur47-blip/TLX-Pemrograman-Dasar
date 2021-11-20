#include <bits/stdc++.h>

using namespace std;

int main()
{

	int arr[100];
	int i=0;
	
	while (cin >> arr[i]){
		i++;
	}
	
	i--;
	while (i>=0){
		cout << arr[i] << endl;
		i--;
	}

return 0;
}
