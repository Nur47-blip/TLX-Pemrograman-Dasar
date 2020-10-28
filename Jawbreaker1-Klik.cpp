#include <bits/stdc++.h>

using namespace std;

int arr[50][50];
int ans = 0;
bool visited[50][50];
int a, b;

bool isValid(int x, int y, int k){
	if (arr[x][y] == k and x >= 0 and y >= 0 and x < a and y < b and !visited[x][y]) return true;
	else return false;
}

void dfs(int x, int y, int k){
	if (isValid(x,y,k)){
		visited[x][y] = true;
		ans++;
		dfs(x-1,y,k);
		dfs(x+1,y,k);
		dfs(x,y-1,k);
		dfs(x,y+1,k);
	}
}

int main(){
	
	cin >> a >> b;
	
	memset(visited, false, sizeof visited);
	
	for (int i = 0 ; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> arr[i][j];
		}
	}
	
	int x, y;
	cin >> x >> y;
	
	dfs(x,y,arr[x][y]);
	
	cout << ans*(ans-1) << endl;

	return 0;
}

