#include <bits/stdc++.h>

using namespace std;

long long b[100009];

int main() {
    int n, v, u, x, q, t;
    cin >> n >> x >> q;
    b[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        b[i] = b[i - 1] + t;
    }
    int ans = 0;
    while (q--) {
        cin >> u >> v;
        ans += (b[v] - b[u - 1] < x);
    }
    cout << ans;
}