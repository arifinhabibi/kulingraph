#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
#include <set>

struct Place {
    std::string name;
    int price;
    float rating;
};


class Graph {
private:
    std::unordered_map<std::string, std::vector<std::string>> adj;

public:
    void addPlace(const std::string& name);
    void addConnection(const std::string& from, const std::string& to);
    void displayGraph();
    void bfs(const std::string& start);
    void dfs(const std::string& start);
};

#endif
