#include <iostream>
#include <string>
using namespace std;
class Node {
public:
	string namaproduk;
	int jumlahproduk;
	string tipeproduk;
	Node* next;
	Node* prev;
};
class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		cout << "Produk berhasil ditambahkan!" << endl;
		this->head = NULL;

		
	}
	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			Node* previous = NULL;
			while (current->next != NULL)
				current = current->next;
		}
		cout << "data tidak ditemukan" << endl;
	}

};

void cariProdukByNama() {
	cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
	if (head == NULL) {
		cout << "Belum ada data produk yang tersimpan." << endl;
	}
	else {
		string targetNama;
		cout << "Nama Produk yang dicari: ";
		getline(cin, targetNama);
		Node* current = head;
		int posisi = 0;
		while (current != NULL) {
			posisi++;

			{
				cout << "nama produk : " << current->namaproduk << endl;
				cout << "jumlah produk : " << current->jumlahproduk << endl;
				cout << "tipe produk : " << current->tipeproduk << "\n" << endl;
				current = current->next;
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" << endl;
			}
		}
	}
	void algorithmaSortByJumlahProduk();
	{
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}

		Node* current;
		Node* last = NULL;
		current = head;

		cout << "nama produk : " << current->namaproduk << endl;
		cout << "jumlah produk : " << current->jumlahproduk << endl;
		cout << "tipe produk : " << current->tipeproduk << "\n" << endl;
		current = current->next;
	}
};
int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

	// 2.single linkedlist dan double linkedlist
	// 3.queue menggunkan FIFO(first in fist out) jadi data yang pertam akali masuk maka data itu yang pertama keluar
	// 4.saat menumpuk buku misalnya karena mengunnkan LIFO(last in fist out)saat buku dimasukkan ke dalam kardus pasti yang diambil yang paing ats dulu baru bisa masuk ke selanjutnya
	// 5.a.4