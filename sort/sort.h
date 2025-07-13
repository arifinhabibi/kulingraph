#ifndef SORT_H
#define SORT_H

#include <vector>
#include "../graph/graph.h"

struct Place;

void bubbleSortByPrice(std::vector<Place>& data);
void bubbleSortByRating(std::vector<Place>& data);

#endif
