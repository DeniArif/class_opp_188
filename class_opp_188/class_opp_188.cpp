#include <iostream>
using namespace std;

class Mahasiswa {
public :
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama= " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {

		cout << "\nMasukkan jumlah SKS= ";
		cin >> sks;
		cout << "\nMasukkan kode MK= ";
		cin >> kode;
		cout << "\nMasukkan Nama MK= ";
		cin >> namaMK;
	}

	void tampilkanMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMK << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	cout << "Masukkan Nim Mahasiswa = ";
	cin >> mhs.nim;
	cout << "Masukkan Nama Mahasiswa = ";
	cin >> mhs.nama;

	mk.inputMK();
	mk.tampilkanMK();
	mhs.tampil();
}
