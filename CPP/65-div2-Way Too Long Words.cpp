#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string word; cin >> word;
        if (word.size() > 10)
            cout << word.front() << (word.size() - 2) << word.back();
        else
            cout << word;
        cout << endl;
    }
    return 0;
}
