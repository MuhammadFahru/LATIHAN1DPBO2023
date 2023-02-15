public class Mahasiswa {
  private String nama;
  private String nim;
  private String prodi;
  private String fakultas;

  public Mahasiswa() {
    this.name     = "";
    this.nim      = "";
    this.jurusan  = "";
    this.fakultas = "";
  }

  public Mahasiswa(String nama, String nim, String prodi, String fakultas) {
    this.name     = name;
    this.nim      = nim;
    this.jurusan  = jurusan;
    this.fakultas = fakultas;
  }

  public function setNama(String nama)
  {
    this.nama = nama;
  }

  public function getNama()
  {
    return this.nama;
  }

  public function setNim(String nim)
  {
    this.nim = nim;
  }

  public function getNim()
  {
    return this.nim;
  }

  public function setProdi(String prodi)
  {
    this.prodi = prodi;
  }

  public function getProdi()
  {
    return this.prodi;
  }

  public function setFakultas(String fakultas)
  {
    this.fakultas = fakultas;
  }

  public function getFakultas()
  {
    return this.fakultas;
  }
}
