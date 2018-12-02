#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> abuse(4, 0);
    for (int i = 0; i < 4; i++)
        cin >> abuse[i];
    int no_dragon; cin >> no_dragon;
    vector <bool> dragons(no_dragon + 1, false);
    for (int abuse_type: abuse) {
        for (int i = abuse_type; i <= no_dragon; i += abuse_type)
            dragons[i] = true;
    }
    int no_dragons_abused = 0;
    for (int i = 1; i <= no_dragon; i++)
        no_dragons_abused += dragons[i];
    cout << no_dragons_abused << endl;
    return 0;
}
