#include <iostream>
#include <string>
#include <vector>

class Graph {
public:
    void LoadMatrix(std::string& filename);
    int GetSize();
    void PrintMatrix();
    void PrintShortestPathWeight(int s);
    void PrintShortestPath(int s);

private:
    std::vector<std::vector<int>> matrix;
};