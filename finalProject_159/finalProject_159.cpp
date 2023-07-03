#include <iostream>
using namespace std;
class BidangDatar {
private:
	int x, y;
public:
	BidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input(int a) {
		return 0;
	}
	virtual float Luas(int a) { 
		return 0; 
	}
	virtual float Keliling(int a) { 
		return 0; 
	}
	virtual void cekUkuran(int a) { 
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
};
class Lingkaran :public BidangDatar {
public:
	void input() {
		cout << "Masukkan jejari : ";
		int jejari;
		cin >> jejari;
		setX(jejari);
	}

	float jejari(int a) {
		return 6;
	}

	float Luas(int a) {
		return 113.04 * a * a;
	}

	float Keliling(int a) {
		return 2 * 113.04 * a;
	}

};
class Persegipanjang :public BidangDatar {
	void input() {
		cout << "Masukkan panjang : ";
		int panjang;
		cin >> panjang;
		setX(panjang);
	}

	float panjang(int a) {
		return 6;
	}
	
	float Luas(int a) {
		return 30 * a * a;
	}

	float Keliling(int a) {
		return 22 * a;
	}
};

int main() {
BidangDatar obj;
{

}
Lingkaran Lingkaran;
{

}
Persegipanjang Persegipanjang;
{

}
}