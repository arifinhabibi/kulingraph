#include <iostream>
#include "graph/graph.h"
#include "search/search.h"
#include "sort/sort.h"

int main() {
    Graph kuliner;

    std::vector<Place> places = {
        {"Bakso Ujang", 15000, 4.5},
        {"Ayam Geprek Yanti", 12000, 4.3},
        {"Mie Gacoan", 10000, 4.6},
        {"Martabak Bangka", 20000, 4.0}
    };

    // Tampilkan tempat sebelum sorting
    std::cout << "Sebelum sorting:\n";
    for (const auto& p : places) {
        std::cout << p.name << " - Rp" << p.price << " - Rating: " << p.rating << "\n";
    }

    // Sort berdasarkan harga
    bubbleSortByPrice(places);

    std::cout << "\nSetelah sorting berdasarkan harga (murah ke mahal):\n";
    for (const auto& p : places) {
        std::cout << p.name << " - Rp" << p.price << " - Rating: " << p.rating << "\n";
    }

    // Cari tempat makan
    std::string cari = "Mie Gacoan";
    int idx = linearSearch(places, cari);
    if (idx != -1) {
        std::cout << "\nDitemukan: " << places[idx].name
                  << ", Harga: Rp" << places[idx].price
                  << ", Rating: " << places[idx].rating << "\n";
    } else {
        std::cout << "\nTempat " << cari << " tidak ditemukan.\n";
    }

    // Tambah simpul (tempat) dan koneksi (relasi)
    for (const auto& p : places) {
        kuliner.addPlace(p.name);
    }

    kuliner.addConnection("Bakso Ujang", "Ayam Geprek Yanti");
    kuliner.addConnection("Ayam Geprek Yanti", "Mie Gacoan");
    kuliner.addConnection("Mie Gacoan", "Martabak Bangka");

    int option;
    do {
        std::cout << "\n=== KulinGraph Menu ===\n";
        std::cout << "1. Tampilkan Graph\n";
        std::cout << "2. Telusuri BFS\n";
        std::cout << "3. Telusuri DFS\n";
        std::cout << "0. Keluar\n";
        std::cout << "Pilih: ";
        std::cin >> option;

        std::string start;
        switch (option) {
            case 1:
                kuliner.displayGraph();
                break;
            case 2:
                std::cout << "Mulai dari: ";
                std::cin.ignore(); getline(std::cin, start);
                kuliner.bfs(start);
                break;
            case 3:
                std::cout << "Mulai dari: ";
                std::cin.ignore(); getline(std::cin, start);
                kuliner.dfs(start);
                break;
        }
    } while (option != 0);

    return 0;
}
