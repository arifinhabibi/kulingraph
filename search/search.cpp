#include "search.h"

int linearSearch(const std::vector<Place>& data, const std::string& name) {
    for (size_t i = 0; i < data.size(); ++i) {
        if (data[i].name == name) return i;
    }
    return -1;
}

int binarySearch(const std::vector<Place>& data, const std::string& name) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (data[mid].name == name) return mid;
        else if (data[mid].name < name) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
