#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k = (n - 1) / 2;
    if (k < 0)
        k = 0;
    cout << k;
}