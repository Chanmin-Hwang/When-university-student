/*

다음은 C++ 언어로 그래프를 인접 리스트로 구현한 깊이 우선 탐색(DFS) 코드의 예입니다.

#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<int> adjList[], int node, bool visited[]) {
    visited[node] = true;
    cout << node << " ";

    for (int i = 0; i < adjList[node].size(); i++) {
        int nextNode = adjList[node][i];
        if (!visited[nextNode]) {
            DFS(adjList, nextNode, visited);
        }
    }
}

int main() {
    int V = 5;
    vector<int> adjList[V];

    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(2);
    adjList[2].push_back(0);
    adjList[2].push_back(3);
    adjList[3].push_back(3);

    bool visited[V];
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }

    DFS(adjList, 2, visited);

    return 0;
}

*/

/*

다음은 C++ 언어로 그래프를 인접 행렬로 구현한 깊이 우선 탐색(DFS) 코드의 예입니다.

#include <iostream>
#define V 5
using namespace std;

void DFS(int adjMatrix[][V], int node, bool visited[]) {
    visited[node] = true;
    cout << node << " ";

    for (int i = 0; i < V; i++) {
        if (adjMatrix[node][i] == 1 && !visited[i]) {
            DFS(adjMatrix, i, visited);
        }
    }
}

int main() {
    int adjMatrix[V][V] = {{0, 1, 1, 0, 0},
                           {1, 0, 1, 0, 0},
                           {1, 1, 0, 1, 0},
                           {0, 0, 1, 0, 1},
                           {0, 0, 0, 1, 0}};

    bool visited[V];
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }

    DFS(adjMatrix, 2, visited);

    return 0;
}

*/