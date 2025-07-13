#include "sort.h"
#include <algorithm>

void bubbleSortByPrice(std::vector<Place>& data) {
    for (size_t i = 0; i < data.size(); ++i) {
        for (size_t j = 0; j < data.size() - i - 1; ++j) {
            if (data[j].price > data[j+1].price) {
                std::swap(data[j], data[j+1]);
            }
        }
    }
}

void bubbleSortByRating(std::vector<Place>& data) {
    for (size_t i = 0; i < data.size(); ++i) {
        for (size_t j = 0; j < data.size() - i - 1; ++j) {
            if (data[j].rating < data[j+1].rating) {
                std::swap(data[j], data[j+1]);
            }
        }
    }
}
