#include <bits/stdc++.h>

using namespace std;

int main() {
    int k; cin >> k;
    string s; cin >> s;

    vector <int> freq(26, 0);
    for (char c: s)
        freq[c - 'a']++;

    string res;
    bool ans = true;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % k == 0)
            res += string(freq[i] / k, char('a' + i));
        else
            ans = false;
    }
    if (ans)
        for (int i = 0; i < k; i++)
            cout << res;
    else
        cout << -1;
    cout << endl;
    return 0;
}
