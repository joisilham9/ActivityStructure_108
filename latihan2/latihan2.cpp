#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "masukan NIM :";
	cin >> mhs.NIM;
	cout << "masukan Nama :";
	cin >> mhs.nama;
	cout << "masukan Alamat :";
	cout << "\n\tmasukan Desa :";
	cin >> mhs.alamat.desa;
	cout << "\tMasukan Kota : ";
	cin >> mhs.alamat.kota;
	cout << "masukan umur : ";
	cin >> mhs.umur;
	 
	cout << "\n\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.nama;
	cout << "\nDesa = " << mhs.alamat.desa;
	cout << "\nkota = " << mhs.alamat.kota;
	cout << "\nUmur = " << mhs.umur;

}