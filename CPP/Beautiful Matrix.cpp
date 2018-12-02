#include <bits/stdc++.h>

using namespace std;

int main() {
    int val;
    int pos_i, pos_j;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            if (val == 1) {
                pos_i = i + 1; pos_j = j + 1;
            }
        }
    }
    cout << (abs(3 - pos_i) + abs(3 - pos_j)) << endl;

    return 0;
}
