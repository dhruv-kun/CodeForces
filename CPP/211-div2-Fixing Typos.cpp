#include <bits/stdc++.h>

using namespace std;

int main() {
    string typo; cin >> typo;
    vector <string> segments(1, string(1, '\0'));
    for (char c: typo) {
        if (segments.empty())
            segments.push_back(string(1, c));
        else if (segments.back().front() == c)
            segments.back().push_back(c);
        else
            segments.push_back(string(1, c));
    }

    for (int i = 1; i < segments.size(); i++) {
        if (segments[i - 1].size() >= 2 && segments[i].size() >= 2)
            segments[i] = segments[i].substr(0, 1);
        else if (segments[i].size() >= 3)
            segments[i] = segments[i].substr(0, 2);
        cout << segments[i];
    }
    cout << endl;
    return 0;
}
