#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int a = 0, b = 0, i = 0, j = 0, max_beauty = 0;
    while (j < n) {
        s[j++] == 'a' ? a++ : b++;
        if (min(a, b) <= k) {
            max_beauty = max(max_beauty, j - i);
            continue;
        }
        if (min(a, b) > k)
            s[i++] == 'a' ? a-- : b--;
    }
    cout << max_beauty << endl;
    return 0;
}
