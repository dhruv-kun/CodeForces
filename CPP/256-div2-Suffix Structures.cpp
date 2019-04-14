#include <bits/stdc++.h>

using namespace std;

bool automaton_test(string &s, string &t) {
    int ti = 0;
    for (char c: s) {
        if (c == t[ti])
            ti++;
        if (ti == t.size())
            return true;
    }
    return false;
}

int array_test(string &s, string &t) {
    vector <int> freq(26, 0);
    for (char c: s)
        freq[c - 'a']++;
    for (char c: t)
        freq[c - 'a']--;

    bool pos = false, neg = false;
    for (int i: freq) {
        if (i < 0)
            neg = neg || i < 0;
        if (i > 0)
            pos = pos || i > 0;
    }
    if (neg)
        return -1;
    else if (pos)
        return 1;
    return 0;
}

int main() {
    string s, t; cin >> s >> t;
    bool t1 = automaton_test(s, t);
    int t2 = array_test(s, t);
    if (t1)
        cout << "automaton" << endl;
    else if (t2 == 0)
        cout << "array" << endl;
    else if (t2 == 1)
        cout << "both" << endl;
    else if (t2 == -1)
        cout << "need tree" << endl;

    return 0;
}
