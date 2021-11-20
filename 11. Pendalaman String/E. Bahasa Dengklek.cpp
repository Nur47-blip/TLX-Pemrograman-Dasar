#include <bits/stdc++.h>

using namespace std;

int main(){

	/* 
	
	kalau ada beberapa fungsi di bawah
	yang nggak bisa di compile di devc++ mu,
	perhatikan compiler option (ada di tools -> compiler option)
	di bagian "add the following command to the linker kasih:
	-static -libgcc -std=c++11 
	
	*/

	//baca tentang ASCII Code biar lebih mudah ngerjakan soal ini
	//ASCII table bisa dilihat di http://www.asciitable.com/ (lihat dec nya)
	
	string s;
	cin >> s;
	
	int len = s.length();
	
	for (int i = 0; i < len; i++){
		if (s[i]>'Z'){
			s[i] = s[i] - 32;
		}
		else {
			s[i] = s[i] + 32;
		}
	}

	cout << s << endl;

	return 0;
}

