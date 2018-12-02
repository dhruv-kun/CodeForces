#include <bits/stdc++.h>

using namespace std;

int main() {
    string num; cin >> num;
    int nearly_lucky = 0;
    for (char n: num) {
        if (n == '4' || n == '7')
            nearly_lucky++;
    }
    bool lucky = nearly_lucky > 0;
    while (nearly_lucky) {
        int x = nearly_lucky % 10;
        if (!(x == 4 || x == 7))
            lucky = false;
        nearly_lucky /= 10;
    }
    cout << ((lucky) ? "YES" : "NO") << endl;
    return 0;
}
