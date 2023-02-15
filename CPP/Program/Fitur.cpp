#include "Mahasiswa.cpp"
#include <iostream>
#include <string>

using namespace std;

class Fitur
{
public:
  Fitur(){};

  void create()
  {
    Mahasiswa mhs;
    string nama, nim, prodi, fakultas;

    cout << "Input Nama : ";
    cin >> nama;
    cout << "Input NIM : ";
    cin >> nim;
    cout << "Input Program Studi : ";
    cin >> prodi;
    cout << "Input Fakultas : ";
    cin >> fakultas;
    cout << "\n";

    mhs.setNama(nama);
    mhs.setNim(nim);
    mhs.setProdi(prodi);
    mhs.setFakultas(fakultas);
  }

  void read()
  {
    Mahasiswa mhs;
    cout << "Nama     : " << mhs.getNama() << endl;
    cout << "Nim      : " << mhs.getNim() << endl;
    cout << "Prodi    : " << mhs.getProdi() << endl;
    cout << "Fakultas : " << mhs.getFakultas() << endl;
  }

  void update()
  {
  }

  void remove()
  {
  }

  ~Fitur(){};
};
