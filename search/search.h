#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
#include <string>
#include "../graph/graph.h"

struct Place;

int linearSearch(const std::vector<Place>& data, const std::string& name);
int binarySearch(const std::vector<Place>& data, const std::string& name);

#endif
