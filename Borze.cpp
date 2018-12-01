#include <bits/stdc++.h>

using namespace std;

int main() {

    string code;
    cin >> code;
    int i = 0;
    vector <int> num_code;
    while (i < code.size()) {
        if (code[i] == '.') {
            num_code.push_back(0);
            i++;
        }
        else if (code[i] == '-') {
            if (code[i + 1] == '.')
                num_code.push_back(1);
            else if (code[i + 1] == '-')
                num_code.push_back(2);
            i += 2;
        }
    }
    for (auto it = num_code.begin(); it != num_code.end(); it++)
        cout << *it;
    cout << endl;
    return 0;
}
