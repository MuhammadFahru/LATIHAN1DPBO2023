#include <bits/stdc++.h>
#include "Fitur.cpp"

using namespace std;

int main()
{
  // Objek Fitur
  Fitur fitur;

  // Masukan pilihan menu
  int n;

  cout << "+---------------------+\n"
       << "|     Daftar Fitur    |\n"
       << "+---------------------+\n"
       << "| 1. Create Data\n"
       << "| 2. Read Data\n"
       << "| 3. Update Data\n"
       << "| 4. Delete Data\n"
       << "+---------------------+" << endl;
  cin >> n;

  switch (n)
  {
  case 1:
    fitur.create();
    break;
  case 2:
    fitur.read();
    break;
  case 3:
    fitur.update();
    break;
  case 4:
    fitur.remove();
    break;
  default:
    cout << "Invalid input.";
  }
}