#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    Node* l = nullptr;
    Node* r = nullptr;
    long long sum = 0;
};

Node* root = nullptr;

Node* merge(Node * l, Node * r) {
    return new Node{ l, r, l->sum + r->sum };
}

Node* build(vector<int>& ar, int l, int r) {
    if (r - l == 1) return new Node{ 0, 0, ar[l] };
    int m = (l + r) / 2;
    return merge(build(ar, l, m), build(ar, m, r));
}

long long sum(Node* v, int l, int r, int lx, int rx) {
    if (l <= lx && rx <= r) return v->sum;
    if (rx <= l || r <= lx) return 0;
    int m = (lx + rx) / 2;
    long long ls = sum(v->l, l, r, lx, m);
    long long rs = sum(v->r, l, r, m, rx);
    return ls + rs;
}

void upd(Node* v) {
    v->sum = v->l->sum + v->r->sum;
}

void Set(Node* v, int index, int value, int lx, int rx) {
    if (rx - lx == 1) v->sum = value;
    int m = (lx + rx) / 2;
    if (index < m) Set(v->l, index, value, lx, m);
    else Set(v->r, index, value, m, rx);
    upd(v);
}
