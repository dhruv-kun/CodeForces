#include <iostream>

using namespace std;

int main() {
    int n, t; cin >> n >> t;
    string q; cin >> q;

    while (t--) {
        for (int i = n - 1; i >= 0; i--) {
            if (q[i] == 'B') {
                swap(q[i], q[min(i + 1, n - 1)]);
                i--;
            }
        }
    }
    cout << q << endl;
    return 0;
}
