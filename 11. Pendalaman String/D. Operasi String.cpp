#include <bits/stdc++.h>

using namespace std;

int main(){

	string a, b, c, d;
	cin >> a >> b >> c >> d;
	
	/* 
	
	kalau ada beberapa fungsi di bawah
	yang nggak bisa di compile di devc++ mu,
	perhatikan compiler option (ada di tools -> compiler option)
	di bagian "add the following command to the linker kasih:
	-static -libgcc -std=c++11 
	
	*/
	
	a.erase(a.find(b), b.length());
	a.insert(a.find(c)+c.length(), d);
	
	cout << a << endl;

	return 0;
}

