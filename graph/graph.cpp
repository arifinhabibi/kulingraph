#include "graph.h"

void Graph::addPlace(const std::string& name) {
    if (adj.find(name) == adj.end()) {
        adj[name] = {};
    }
}

void Graph::addConnection(const std::string& from, const std::string& to) {
    adj[from].push_back(to);
    adj[to].push_back(from);
}

void Graph::displayGraph() {
    for (const auto& [place, neighbors] : adj) {
        std::cout << place << " -> ";
        for (const auto& n : neighbors) {
            std::cout << n << ", ";
        }
        std::cout << "\n";
    }
}

void Graph::bfs(const std::string& start) {
    std::set<std::string> visited;
    std::queue<std::string> q;

    visited.insert(start);
    q.push(start);

    std::cout << "Hasil BFS: ";
    while (!q.empty()) {
        std::string current = q.front(); q.pop();
        std::cout << current << " ";

        for (const auto& neighbor : adj[current]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    std::cout << "\n";
}

void Graph::dfs(const std::string& start) {
    std::set<std::string> visited;
    std::stack<std::string> s;

    s.push(start);

    std::cout << "Hasil DFS: ";
    while (!s.empty()) {
        std::string current = s.top(); s.pop();

        if (visited.find(current) == visited.end()) {
            std::cout << current << " ";
            visited.insert(current);

            for (auto it = adj[current].rbegin(); it != adj[current].rend(); ++it) {
                if (visited.find(*it) == visited.end()) {
                    s.push(*it);
                }
            }
        }
    }
    std::cout << "\n";
}
