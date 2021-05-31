#include <bits/stdc++.h>

using namespace std;

vector <bool> a(1000009, true);

void sangNt(int n) {
    a[0] = a[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
        if (a[i])
            for (int j = 2 * i; j <= n; j += i)
                a[j] = false;
}

int main() {
    int n;
    cin >> n;
    sangNt(n);
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
        if (a[i] && a[n - i])
            count++;
    cout << count;
}