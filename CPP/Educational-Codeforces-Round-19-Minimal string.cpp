#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    vector <int> freq(26);
    for (int i = 0; i < s.size(); i++)
        freq[s[i] - 'a']++;
    string t, u;
    int iter = 0, i = 0;
    while (i < 26) {
        if (freq[i] == 0)
            i++;
        else {
            while (!t.empty() && t.back() - 'a' <= i)
                u.push_back(t.back()), t.pop_back();
            t.push_back(s[iter]);
            freq[s[iter] - 'a']--;
            iter++;
        }
    }
    while (!t.empty()) {
        u.push_back(t.back());
        t.pop_back();
    }
    cout << u << endl;
    return 0;
}
