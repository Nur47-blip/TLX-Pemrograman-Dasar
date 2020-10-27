#include <bits/stdc++.h>

using namespace std;;

int main(){

	int n;
	stack<int> x;
	while (cin>>n){
		x.push(n);
	}

	while(!x.empty()){
		cout<<x.top()<<endl;
		x.pop();
	}

	return 0;
}
