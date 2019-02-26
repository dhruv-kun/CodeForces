#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> char_freq(26, 0);
    string t;
    for (int i = 0; i < 2; i++) {
        cin >> t;
        for (char c: t)
            char_freq[c - 'A']++;
    }
    cin >> t;
    for (char c: t)
        char_freq[c - 'A']--;
    bool result = true;
    for (int i: char_freq)
        if (abs(i) > 0)
            result = false;
    cout << (result ? "YES" : "NO") << endl;
    return 0;
}
