#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <pair <int, int>> points(n);
    for (int i = 0; i < n; i++)
        cin >> points[i].first >> points[i].second;
    bool left, right, up, down;
    int count = 0;
    for (auto pt1: points) {
        left = right = up = down = false;
        for (auto pt2: points) {
            if (pt1 != pt2) {
                if (pt1.first == pt2.first) {
                    if (pt1.second < pt2.second)
                        up = true;
                    else if (pt1.second > pt2.second)
                        down = true;
                }
                else if (pt1.second == pt2.second) {
                    if (pt1.first < pt2.first)
                        right = true;
                    else if (pt1.first > pt2.first)
                        left = true;
                }
            }
        }
        count += (left + right + up + down == 4) ? 1 : 0;
    }
    cout << count << endl;
    return 0;
}
