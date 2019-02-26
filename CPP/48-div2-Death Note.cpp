#include <bits/stdc++.h>

#define forall(a, it) for(auto it = (a).begin(); it != (a).end(); it++)
#define forsome(a, it, n) for(auto it = (a).begin(); it != (a).begin() + n; it++)
#define foreach(n, i) for(auto i = 0; i < n; i++)
#define foriin(a, b, i) for(auto i = a; i < b; i++)
#define rdarr(a, n) foreach(n, i) cin >> a[i];
#define all(v) (v).begin(), (v).end()
#define some(v, n) (v).begin(), (v).begin() + n
#define len(a) (int)((a).size())
#define inbtw(a, b, c) a >= b && a <= c
#define print(v) for(auto z = (v).begin(); z != (v).end(); z++) cout << *z << " ";
#define eps 1e-9
#define inf 1e9
#define itr iterator

using namespace std;

typedef long int32;
typedef unsigned long uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair <int, int> pii;
typedef pair <long, long> pll;
typedef pair <double, double> pdd;
typedef vector <bool> vb;
typedef vector <int> vi;
typedef vector <long long> vll;
typedef vector <uint64> vull;
typedef vector <string> vst;

int main() {
    int64 n, m, res = 0; cin >> n >> m;
    foreach(n, i) {
        int64 ai; cin >> ai;
        cout << ((res + ai) / m) << endl;
        res = (res + ai) % m;
    }
    return 0;
}
