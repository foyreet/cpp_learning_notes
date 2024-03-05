#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(const vector<vector<int>>& graph, int v, vector<int>& visited) {
    stack<int> stack;
    stack.push(v);
    visited[v] = 1;

    while (!stack.empty()) {
        int currentVertex = stack.top(); stack.pop();

        for (int to : graph[currentVertex]) {
            if (visited[to]) {
                continue;
            }

            stack.push(to);
            visited[to] = 1;
        }
    }
}
// Нахождение количества компонентов связности в неориентированном графе
void A() {
    int vertexCount, edgeCount;
    cin >> vertexCount >> edgeCount;
    vertexCount++;
    vector<vector<int>> graph(vertexCount);
    for (int i = 0; i < edgeCount; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> visited(vertexCount, 0);
    int components = 0;
    for (int i = 1; i < vertexCount; i++) {
        if (!visited[i]) {
            dfs(graph, i, visited);
            components++;
        }
    }
    cout << components;
}


int main() {
    A();
}

