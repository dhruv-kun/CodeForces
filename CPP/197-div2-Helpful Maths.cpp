#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int one = 0, two = 0, three = 0;
    for (char c: s) {
        switch (c) {
            case '1': one++; break;
            case '2': two++; break;
            case '3': three++; break;
        }
    }
    s.clear();
    while (one > 0 || two > 0 || three > 0) {
        while (one--) {
            s.push_back('1');
            s.push_back('+');
        }
        while (two--) {
            s.push_back('2');
            s.push_back('+');
        }
        while (three--) {
            s.push_back('3');
            s.push_back('+');
        }
    }
    s.pop_back();
    cout << s << endl;
    return 0;
}
