#include <iostream>

using namespace std;

int solve(int n, int k) {
    long long l = 1, r = 1000000000000000000;
    while (l <= r) {
        long long x = (l + r) / 2;
        if (x - x / n == k){
            if (x % n != 0)
                return x;
            return x - 1;
        }
        else if (x - x / n < k)
            l = x + 1;
        else
            r = x - 1;
    }
    return 0;
}

int main() {
    int n, k, q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> n >> k;
        cout << solve(n, k)<< endl;
    }
}