#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    string t = "hello";
    int j = 0;
    for (char c: s) {
        if (c == t[j])
            j++;
        if (j == t.size())
            break;
    }
    cout << (j == t.size() ? "YES" : "NO") << endl;
    return 0;
}
