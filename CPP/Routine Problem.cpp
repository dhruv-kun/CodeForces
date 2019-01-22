#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int num = b * c - a * d, den = 1;
    if (num != 0) {
        den = (num > 0) ? b * c : a * d;
        int g = __gcd(abs(num), den);
        num = abs(num) / g;
        den = den / g;
    }
    cout << num << "/" << den << endl;
    return 0;
}
