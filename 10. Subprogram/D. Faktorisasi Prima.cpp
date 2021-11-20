#include <bits/stdc++.h>

using namespace std;

bool cek(int x){
	bool flag = true;
	for (int i = 2; i*i <= x; i++){
		if (x%i == 0){
			flag = false;
			return false; //kalau udah ketauan bukan prima langsung bilang aja
		}
	}
	
	return true; // kalau bisa sampai sini berarti prima
}

int main(){

	int n;
	cin >> n;
	
	int temp = n;
	int prima = 2; //mulai dari 2 ya prima nya
	bool yangpertama = true; //buat ngecek dia faktor prima yang pertama apa bukan
	while (temp > 1){
		//cari bilangan prima dulu
		while (!cek(prima)){
			prima++; // kalau bukan prima lanjut ke bil. berikutnya
		}
		
		int pangkat = 0;
		while (temp%prima == 0){
			pangkat++;
			temp /= prima;
		}
		
		if (pangkat > 0){
			if (yangpertama){
				yangpertama = false; //jangan lupa di false in.
				if (pangkat>1){
					cout << prima << "^" << pangkat;
				}
				else cout << prima;
			}
			else {
				cout << " x ";
				if (pangkat>1){
					cout << prima << "^" << pangkat;
				}
				else cout << prima;
			}
		}
		
		prima++; //lanjut ke prima berikutnya
	}

	cout << endl; // terakhir kasih endline

	return 0;
}

