#include "graph.h"
#include <fstream>
#include <sstream>
#include <limits>
#include <algorithm>

void Graph::LoadMatrix(std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }

    int size;
    file >> size;
    matrix.resize(size, std::vector<int>(size));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            file >> matrix[i][j];
        }
    }
}

int Graph::GetSize() {
    return matrix.size();
}

void Graph::PrintMatrix() {
    for (const auto& row : matrix) {
        for (int weight : row) {
            std::cout << weight << ' ';
        }
        std::cout << '\n';
    }
}

void Graph::PrintShortestPathWeight(int s) {
    const int size = GetSize();
    const int INF = 999;

    std::vector<int> dist(size, INF);
    dist[s] = 0;

    for (int k = 0; k < size - 1; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] != INF && dist[i] != INF && dist[j] > dist[i] + matrix[i][j]) {
                    dist[j] = dist[i] + matrix[i][j];
                }
            }
        }
    }

    for (int i = 0; i < size; i++) {
        std::cout << dist[i] << '\n';
    }
}

void Graph::PrintShortestPath(int s) {
    const int size = GetSize();
    const int INF = 999;

    std::vector<int> dist(size, INF);
    std::vector<int> prev(size, -1);
    dist[s] = 0;

    for (int k = 0; k < size - 1; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] != INF && dist[i] != INF && dist[j] > dist[i] + matrix[i][j]) {
                    dist[j] = dist[i] + matrix[i][j];
                    prev[j] = i;
                }
            }
        }
    }

    for (int i = 0; i < size; i++) {
        if (i == s) continue;

        std::vector<int> path;
        for (int v = i; v != -1; v = prev[v]) {
            path.push_back(v);
        }

        std :: reverse(path.begin(), path.end());

        for (int v : path) {
            std::cout << v << ' ';
        }
        std::cout << '\n';
    }
}