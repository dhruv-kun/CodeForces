#include <bits/stdc++.h>

using namespace std;

int costCalc(vector <int> &people, int floor) {
    int cost = 0;
    for (int i = 0; i < people.size(); i++)
        cost += 2 * people[i] * (abs(i + 1 - floor) + i + abs(floor - 1));
    return cost;
}

int main() {
    int n; cin >> n;
    vector <int> people(n);
    for (int i = 0; i < n; i++)
        cin >> people[i];
    int cost = numeric_limits <int> :: max();
    for (int i = 1; i <= 100; i++)
        cost = min(cost, costCalc(people, i));
    cout << cost << endl;
    return 0;

}
