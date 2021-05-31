#include <bits/stdc++.h>

using namespace std;

long long sub1(long long n, long long q) {
    long long d[3];
    long long k;
    d[0] = d[2] = 0;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k % q == 0 || k % q == 2)
            d[k % q]++;
    }
    k = d[0] * (d[0] - 1) / 2 + d[2] * (d[2] - 1) / 2;
    return k;
}

int a2[2002];

long long sub2(long long n, long long q) {
    long long count = 0, k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        a2[k % q]++;
    }
    for (int i = 0; i <= q; i++)
        for (int j = 0; j <= i; j++)
            if ((i + j) % q == i * j % q)
                if (i == j)
                    count += (a2[i] * (a2[i] - 1) / 2);
                else 
                    count += (a2[i] * a2[j]);
    return count;
}

int main() {
    long long n, q;
    cin >> n >> q;
    if (q == 1000000000)
        cout << sub1(n, q);
    else if (q < 2000) 
        cout << sub2(n, q);
}