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
	
	string s;
	cin >> s;
	
	int len = s.length();
	
	//cek dulu style nya
	bool adaunderscore = false;
	for (int i = 0; i < len; i++){
		if (s[i] == '_'){
			adaunderscore = true;
			break;
		}
	}
	
	if (adaunderscore){
		string ans = "";
		bool dijadiinkapital = false;
		for (int i = 0; i < len; i++){
			if (s[i] == '_'){
				dijadiinkapital = true;
			}
			else if (dijadiinkapital){
				ans += (s[i] - 32);
				dijadiinkapital = false;
			}
			else {
				ans += s[i];
			}
		}
		
		cout << ans << endl;
	}
	else {
		string ans = "";
		for (int i = 0; i < len; i++){
			if (s[i] <= 'Z'){
				ans += '_';
				ans += (s[i] + 32);
			}
			else ans += s[i];
		}
		
		cout << ans << endl;
	}
	return 0;
}

