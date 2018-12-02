#include <bits/stdc++.h>

using namespace std;

int main() {
    float juice_percent = 0.0, x;
    int containers = 0; cin >> containers;
    for (int i = 0; i < containers; i++) {
        cin >> x;
        juice_percent += x;
    }
    printf("%.7f", juice_percent / containers);
    return 0;
}
