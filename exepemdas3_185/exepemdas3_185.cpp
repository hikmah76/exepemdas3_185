#include <iostream>
using namespace std;

class bidangDasar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujur sangkar 
public:
	bidangDasar() { // construktor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi sex untuk disimpan di x
	virtual float Luas(int a) { return 0; } // fungsi menghitung luas 
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling 
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x=a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDasar { /*masukkan jejari,Luas lingkaran, Keliling lingkaran*/
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujur sangkar 
public:
	Lingkaran() { // construktor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi sex untuk disimpan di x
	virtual float LuasLingkaran(int a) { return 0; } // fungsi menghitung luas lingkaran
	virtual float KelilingLingkaran(int a) { return 0; } //fungsi untuk menghitung keliling lingkaran
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
	 
};


class Bujursangkar:public bidangDasar {/*masukkan sisi, Luas Bujursangkasr, Keliling Bujursangkar*/
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujur sangkar 
public:
	Bujursangkar() { // construktor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi sex untuk disimpan di x
	virtual float LuasBujursangkar(int a) { return 0; } // fungsi menghitung luas Bujursangkar
	virtual float KelilingBujursangkar(int a) { return 0; } //fungsi untuk menghitung keliling Bujursangkar
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
int main() { /**/

	cout << "Lingkaran dibuat , Masukkan jejari, Luas Lingkaran, keliling Lingkaran " << endl;
	cout << "Bujursangkar dibuat, masukkan sisi, Luas Bujursangkasr, Keliling Bujursangkar" << endl;
}