### KulinGraph (Aplikasi Rekomendasi Tempat Makan)

### Deskripsi Proyek:
KulinGraph adalah aplikasi sederhana berbasis C++ yang mengimplementasikan konsep struktur data dan algoritma seperti:
- Graph untuk merepresentasikan koneksi antar tempat makan
- Breadth-First Search (BFS) dan Depth-First Search (DFS) untuk penelusuran tempat
- Searching (Linear Search) untuk mencari tempat makan berdasarkan nama
- Sorting (Bubble Sort) untuk mengurutkan tempat berdasarkan harga atau rating
- Analisis Big-O Notation disisipkan di setiap fungsi

### Studi Kasus:
Aplikasi ini berguna untuk pengguna yang ingin mencari dan menelusuri rekomendasi tempat makan secara lokal, misalnya dalam satu kawasan kampus atau kota kecil.

### Struktur Folder:
kulingraph/
├── Dockerfile
├── CMakeLists.txt
├── README.txt
├── main.cpp
├── graph/
│   ├── graph.h
│   └── graph.cpp
├── search/
│   ├── search.h
│   └── search.cpp
├── sort/
│   ├── sort.h
│   └── sort.cpp

### Cara Menjalankan:
1. Build dengan Docker:
```bash
   docker build -t kulingraph .
```
2. Jalankan program:
```bash
   docker run -it kulingraph
```
### Fitur:
- Tambah tempat makan (node)
- Tambah koneksi antar tempat (edge)
- Tampilkan peta (graph)
- Telusuri dengan BFS dan DFS
- Cari tempat makan dengan linear search
- Urutkan berdasarkan harga atau rating (bubble sort)

### Kompleksitas Algoritma (Big-O):
- Linear Search: O(n)
- Bubble Sort: O(n²)
- BFS / DFS: O(V + E), di mana V adalah jumlah node, E adalah jumlah edge
