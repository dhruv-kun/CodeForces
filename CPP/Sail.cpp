#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;
    string dir; cin >> dir;

    long long int dx = ex - sx, dy = ey - sy;
    int t = 0;
    if (dx != 0 || dy != 0) {
        for (int i = 0; i < n; i++) {
            char d = dir[i];
            if (dx > 0 && d == 'E')
                dx--;
            else if (dx < 0 && d == 'W')
                dx++;
            if (dy > 0 && d == 'N')
                dy--;
            else if (dy < 0 && d == 'S')
                dy++;

            if (dx == 0 && dy == 0) {
                t = i + 1;
                break;
            }
        }
    }
    if (dx == 0 && dy == 0)
        cout << t << endl;
    else
        cout << -1 << endl;
    return 0;
}
