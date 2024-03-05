#include <iostream>
#include <vector>
#include <utility>
#include <stack>

using namespace std;
/*
 E <= V^2
 E(количество рёбер)
 V(количество вершин)

 Разряженный граф это когда рёбер на порядок меньше вершин
*/

/*
Представление неориентированного графа списком рёбер
Используемая память O(E)
Проверка существования, добавление, удаление, изменение ребра (a, b) O(E)
Перебор соседей вершины a O(E)
 */

void undirected_graph_list_of_edges() {
    int vertexCount, edgeCount;
    cin >> vertexCount >> edgeCount;
    vector<pair<int, int>> edges(edgeCount);
    for (auto &[a, b] : edges) {
        cin >> a >> b;
    }
}

/*
Представление неориентированного графа матрицей смежности
Используемая память O(V^2)
Проверка существования, добавление, удаление, изменение ребра (a, b) O(1)
Перебор соседей вершины a O(V)
 */

void undirected_graph_adjacency_matrix() {
    int vertexCount, edgeCount;
    cin >> vertexCount >> edgeCount;
    vector<vector<int>> g(vertexCount + 1, vector<int>(vertexCount + 1, 0));
    for (int i = 0; i < edgeCount; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1][v2] = 1;
        g[v2][v1] = 1;
    }

    for (int i = 0; i < vertexCount + 1; i++) {
        for (int j = 0; j < vertexCount + 1; j++) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }

}

/*
Представление неориентированного графа списком смежности
Используемая память O(V + E)
Проверка существования, добавление, удаление, изменение ребра (a, b) O(deg a)
Перебор соседей вершины a O(deg a)
*/

void undirected_graph_list_adjacency() {
    int vertexCount, edgeCount;
    cin >> vertexCount >> edgeCount;
    vector<vector<int>> graph(vertexCount);
    for (int i = 0; i < edgeCount; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}


/*
Сложность поиска в глубину - O(V+E)
 dfs реализованный с помощью рекурсии на списках смежности
 */
void dfs(vector<vector<int>> &graph, int v, vector<int> &visited) {
    visited[v] = 1;
    for (int to : graph[v]) {
        if (!visited[to]) {
            dfs(graph, to, visited);
        }
    }
}

/*
 dfs реализованный с помощью стека на списках смежности
 */

void dfs_stack(const vector<vector<int>>& graph, int v, vector<int>& visited) {
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

void dfs_graph() {
    int vertexCount, edgeCount;
    cin >> vertexCount >> edgeCount;
    vector<vector<int>> graph(vertexCount);
    for (int i = 0; i < edgeCount; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int v;
    cin >> v;
    vector<int> visited;
    dfs(graph, v, visited);

}

/*
 Подсчёт количества компонент связности в неориентированном графе
 */

void countComponents() {
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
    int componentCount = 0;
    for (int i = 1; i < vertexCount; i++) {
        if (!visited[i]) {
            dfs(graph, i, visited);
            componentCount++;
        }
    }
    cout << componentCount;
}

/*
 Задача на проверку можем ли мы добраться от одной вершины до другой
 */

void start_finish() {
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

    int start, finish;
    cin >> start >> finish;
    vector<int> visited(vertexCount);
    dfs(graph, start, visited);
    if (visited[finish] == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

/*
 Проверка связности графа
 */

void check_graph_connectivity() {
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
    vector<int> visited(vertexCount);
    dfs(graph, 0, visited);
    if (find(visited.begin(), visited.end(), 0) == visited.end()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

/*
 Раскраска компонент связности в разные цвета
 */

void dfs_stack_component_color(const vector<vector<int>>& graph, int v, vector<int>& visited, int component) {
    stack<int> stack;
    stack.push(v);
    visited[v] = component;

    while (!stack.empty()) {
        int currentVertex = stack.top(); stack.pop();

        for (int to : graph[currentVertex]) {
            if (visited[to]) {
                continue;
            }

            stack.push(to);
            visited[to] = component;
        }
    }
}

void component_color() {
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
    vector<int> visited(vertexCount);
    int componentCount = 1;
    for (int i = 1; i < vertexCount; i++) {
        if (!visited[i]) {
            dfs_stack_component_color(graph, i, visited, componentCount);
            componentCount++;
        }
    }
    for (int color : visited) {
        cout << color << " ";
    }
}
int main() {
    component_color();
}
