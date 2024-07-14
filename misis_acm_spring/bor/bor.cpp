#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    vector<int> v = vector<int>(3, - 1);
    int sum = 0;
    int cnt = 0;
};

vector<Node> nodes = {Node()};

int add_node() {
    int i = nodes.size();
    nodes.push_back(Node());
    return i;
}

void add_word(const string& s) {
    int n = s.size();
    int curr = 0;
    nodes[curr].sum += 1;

    for (int i = 0; i < n; i++) {
        int c = s[i] - 'a';
        if (nodes[curr].v[c] == -1) {
            nodes[curr].v[c] = add_node();
        }
        curr = nodes[curr].v[c];
        nodes[curr].sum += 1;
    }
    nodes[curr].cnt += 1;
}


int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
    }
}
