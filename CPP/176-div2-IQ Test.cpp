#include <bits/stdc++.h>

using namespace std;

bool checkPaint(vector <string> square) {
    int black, white;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            black = 0;
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    if (square[i + k][j + l] == '.')
                        black++;
                }
            }
            if (black != 2)
                return true;
        }
    }
    return false;
}

int main() {
    vector <string> square(4);
    for (int i = 0; i < 4; i++)
        cin >> square[i];
    bool ans = checkPaint(square);
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
