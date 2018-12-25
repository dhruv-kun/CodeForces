#include <bits/stdc++.h>

using namespace std;

void build(vector <vector <int>> &tree, int lvl, bool op) {
    if (lvl == -1)
        return;
    for (int i = 0; i < tree[lvl].size(); i++) {
        if (op)
            tree[lvl][i] = tree[lvl + 1][2 * i] | tree[lvl + 1][2 * i + 1];
        else
            tree[lvl][i] = tree[lvl + 1][2 * i] ^ tree[lvl + 1][2 * i + 1];
    }
    build(tree, lvl - 1, !op);
}

int eval(vector <vector <int>> &tree, int lvl, bool op, int idx) {
    if (lvl == -1)
        return tree[0][0];
    if (op)
        tree[lvl][idx] = tree[lvl + 1][2 * idx] | tree[lvl + 1][2 * idx + 1];
    else
        tree[lvl][idx] = tree[lvl + 1][2 * idx] ^ tree[lvl + 1][2 * idx + 1];
    return eval(tree, lvl - 1, !op, idx / 2);
}

void printTree(vector <vector <int>> &tree, int lvl) {
    if (lvl == -1)
        return;
    for (int i = 0; i < tree[lvl].size(); i++)
        cout << tree[lvl][i] << " ";
    cout << endl;
    printTree(tree, lvl - 1);
}

int main() {
    int n, m; cin >> n >> m;
    vector <vector <int>> tree;
    for (int i = 0, size = 1; i <= n; i++, size *= 2)
        tree.push_back(vector <int>(size, 0));
    for (int i = 0; i < (1 << n); i++)
        cin >> tree[n][i];
    build(tree, n - 1, true);
    for (int i = 0; i < m; i++) {
        int p, b; cin >> p >> b;
        int reset = tree[n][p - 1];
        tree[n][p - 1] = b;
        cout << eval(tree, n - 1, true, (p - 1) / 2) << endl;
    }
    return 0;
}
