# Laporan Programming Assignment 3: Simple STL

## Class Triangle (triangle.hpp)

class Triangle ini isinya 3 titik bertipe Point2D yaitu _t1, _t2, _t3 (private), yang mewakili 3 sudut segitiga. Terus ada constructor default sama constructor yang langsung diisi 3 titik. Ada juga setter (SetT1, SetT2, SetT3) sama getter (GetT1, GetT2, GetT3) buat masing-masing titik. Yang paling penting ada method TriangleType() buat nentuin sekaligus nge-print jenis segitiganya.

## Logika penentuan jenis segitiga (triangle.cpp)

pertama itu dihitung dulu panjang ketiga sisi segitiganya, caranya pakai operator dari Point2D buat dapetin selisih dua titik, terus dihitung jaraknya pakai rumus Euclidean (akar dari dx² + dy² + dz²).

- sideA = jarak titik 2 ke titik 3
- sideB = jarak titik 1 ke titik 3
- sideC = jarak titik 1 ke titik 2

Habis itu baru dicek:
1. Kalau semua sisi sama panjang berarti sama sisi.
2. Kalau bukan sama sisi, dicek apakah memenuhi teorema Pythagoras (sisi terpendek² + sisi tengah² = sisi terpanjang²), kalau iya berarti siku-siku.
3. Kalau bukan siku-siku juga, dicek ada nggak minimal dua sisi yang sama panjang, kalau ada berarti sama kaki.
4. Kalau nggak masuk semua kondisi di atas berarti sembarang.

Buat bandingin panjang sisinya aku pakai toleransi dikit (EPSILON) soalnya perhitungan float suka meleset dikit-dikit gitu.

## Cara pakai program

Pertama program bakal nanya mau input berapa banyak segitiga (N). Terus buat tiap segitiga user diminta masukin koordinat x, y, z dari 3 titik sudutnya satu-satu. Setelah semua data selesai diinput, program langsung ngeprint jenis tiap segitiganya berurutan.

## Contoh input dan output

\```
Masukkan jumlah segitiga: 2

Segitiga ke-1
Titik 1 (x y z): 1 2 3
Titik 2 (x y z): 1 1 1
Titik 3 (x y z): 0 0 0

Segitiga ke-2
Titik 1 (x y z): 2 3 4
Titik 2 (x y z): 2 2 2
Titik 3 (x y z): 1 2 6

Hasil klasifikasi:
Segitiga 1: sembarang
Segitiga 2: sembarang
\```

Di contoh di atas kedua segitiganya panjang sisinya beda-beda semua dan nggak memenuhi Pythagoras, jadi diklasifikasiin sebagai sembarang.