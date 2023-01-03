#include <iostream>
#include <string>

using namespace std;

const int MAX_MEMBERS = 100;

struct Student {
  string name;
  int nim;
};

Student members[MAX_MEMBERS];
int num_members = 0;

int main() {
  // Memasukkan data anggota
  cout << "Masukkan jumlah anggota BEM: ";
  cin >> num_members;

  for (int i = 0; i < num_members; i++) {
    cout << "Masukkan NIM anggota ke-" << i+1 << ": ";
    cin >> members[i].nim;
    cout << "Masukkan nama anggota ke-" << i+1 << ": ";
    cin >> members[i].name;
  }

  // Mencari anggota berdasarkan NIM
  int nim_to_find;
  cout << "Masukkan NIM yang ingin dicari: ";
  cin >> nim_to_find;

  for (int i = 0; i < num_members; i++) {
    if (members[i].nim == nim_to_find) {
      cout << "Nama anggota dengan NIM " << nim_to_find << " adalah " << members[i].name << endl;
      return 0;
    }
  }

  cout << "Tidak ditemukan anggota dengan NIM " << nim_to_find << endl;
  return 0;
}