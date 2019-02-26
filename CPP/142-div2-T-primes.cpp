#include <bits/stdc++.h>

using namespace std;

set <int> primes(long long int limit=1e6 + 1) {
    vector <bool> primes(limit, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i < int(ceil(sqrt(limit))); i++)
        for (int j = i * i; j < limit; j += i)
            primes[j] = false;

    set <int> prime_set;
    for (int i = 2; i < limit; i++)
        if (primes[i])
            prime_set.insert(i);

    return prime_set;
}


int main() {
    int n; cin >> n;
    set <int> prime_set = primes();
    for (int i = 0; i < n; i++) {
        long long int x; cin >> x;
        long long int s = sqrt(x);
        if (prime_set.find(s) != prime_set.end() && s * s == x)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
