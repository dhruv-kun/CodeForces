#include <bits/stdc++.h>

using namespace std;

pair <int, string> solve(string s, int n, int k) {
    if (k == 2) {
        int c = 0;
        for (int i = 0; i < n; i++)
            if (((i & 1) && s[i] != 'A') || !(i & 1) && s[i] != 'B')
                c += 1;
        if (c > (n - c)) {
            s = "";
            for (int i = 0; i < n / 2; i++)
                s += "AB";
            if (n & 1)
                s.push_back('A');
        }
        else {
            s = "";
            for (int i = 0; i < n / 2; i++)
                s += "BA";
            if (n & 1)
                s.push_back('B');
        }
        return make_pair(min(c, (n - c)), s);
    }
    int count = 0;

    vector <char> possible_chars;
    for (int i = 0; i < k; i++)
        possible_chars.push_back(char('A') + i);

    int start = 0, end = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            if (end - start + 1 > 1) {
                for (char c: possible_chars) {
                    if (c != s[i] && c != s[start]) {
                        for (int j = start + 1; j <= end; j += 2)
                            s[j] = c, count += 1;
                        break;
                    }
                }
            }
            start = end = i;
        }
        else
            end = i;
    }
     if (end - start + 1 > 1) {
        for (char c: possible_chars) {
            if (c != s[n - 1] && c != s[start]) {
                for (int j = start + 1; j <= end; j += 2)
                    s[j] = c, count += 1;
                break;
            }
        }
    }

    return make_pair(count, s);
}

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int count = 0;
    tie(count, s) = solve(s, n, k);
    cout << count << endl << s << endl;
    return 0;
}

