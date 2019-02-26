#include <bits/stdc++.h>

using namespace std;

bool distincDigits (int x) {
    vector <int> digits(10, 0);
    while (x) {
        if (digits[x % 10])
            return false;
        digits[x % 10]++;
        x /= 10;
    }
    return true;
}

int main() {

    int year; cin >> year;
    year++;
    while(!distincDigits(year)) year++;
    cout << year << endl;
    return 0;
}
