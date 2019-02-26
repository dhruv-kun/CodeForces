#include <bits/stdc++.h>

using namespace std;

int main() {
    string _s; cin >> _s;
    stack <char> s;
    for (char c: _s) {
        if (s.empty())
            s.push(c);
        else {
            if (s.top() == c)
                s.pop();
            else
                s.push(c);
        }
    }
    cout << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
