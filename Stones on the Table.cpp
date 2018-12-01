#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string stones; cin >> stones;
    int min_same_stones = 0;
    for (int i = 1; i < n; i++)
        if (stones[i - 1] == stones[i])
            min_same_stones++;
    cout << min_same_stones << endl;
    return 0;
}
