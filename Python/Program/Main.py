from Mahasiswa import Mahasiswa

data = Mahasiswa()

print("Input")
nama = str(input("Nama : "))
nim = str(input("NIM : "))
prodi = str(input("Program Studi : "))
fakultas = str(input("Fakultas: "))

print("\nData")
data.setNama(nama)
data.setNim(nim)
data.setProdi(prodi)
data.setFakultas(fakultas)
data.printHasil()