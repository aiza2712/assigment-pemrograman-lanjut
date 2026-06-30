# Laporan Programming Assignment 2: Object Oriented Programming

## Deskripsi Program

Program ini adalah SIM Akademik sederhana yang dibuat menggunakan paradigma OOP dalam C++. Program memiliki 4 class yang dibungkus dalam namespace `sim`.

## Desain Class

### Hierarki Class

`Orang` adalah base class yang diwarisi oleh `Mahasiswa`, `Dosen`, dan `Tendik`.

### Atribut Tiap Class

**Orang** (base class)
- `nama` - nama orang
- `umur` - umur orang

**Mahasiswa** extends Orang
- `nim` - nomor induk mahasiswa
- `jurusan` - jurusan mahasiswa
- `matkul_diambil` - daftar mata kuliah yang diambil

**Dosen** extends Orang
- `nip` - nomor induk pegawai
- `matkul_diajar` - daftar mata kuliah yang diajar

**Tendik** extends Orang
- `nip` - nomor induk pegawai
- `jabatan` - jabatan tendik
- `divisi` - divisi tendik
- `status_kepegawaian` - status kepegawaian tendik

## Konsep OOP yang Digunakan

**Inheritance** — `Mahasiswa`, `Dosen`, dan `Tendik` mewarisi atribut `nama` dan `umur` dari class `Orang` sehingga tidak perlu mendefinisikan ulang.

**Encapsulation** — Atribut di semua class dibuat `private` atau `protected` dan hanya bisa diakses lewat getter. Khusus `Orang` menggunakan `protected` agar child class bisa mengakses `nama` dan `umur` secara langsung tanpa getter.

**Polymorphism** — Setiap class mengoverride method `tampilInfo()` dari `Orang` sehingga tiap class punya tampilan informasi yang berbeda sesuai atributnya.

**Namespace** — Seluruh class dibungkus dalam namespace `sim` untuk menghindari naming conflict dengan library lain.

## Contoh Output

```
=== Mahasiswa ===
Nama    : Aiza
Umur    : 20
NIM     : 5024241036
Jurusan : Teknik Komputer
Matkul  : Pemrograman Lanjut Basis Data

=== Dosen ===
Nama   : Dr. Budi
Umur   : 45
NIP    : NIP001
Matkul : Pemrograman OOP

=== Tendik ===
Nama               : Siti
Umur               : 35
NIP                : NIP002
Jabatan            : Staff
Divisi             : Akademik
Status Kepegawaian : PNS
```
