#include <iostream>
using namespace std;

class Mahasiswa {
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

	cout << "\nInput data mahasiswa " << endl;
	cout << "\nMasukkan NIM: ";
	cin >> mhs.nim;
	cout << "\nMasukkan nama ";
	cin >> mhs.nama;

	cout << "\nInput data mata kuliah " << endl;
	mk.inputMK()
}