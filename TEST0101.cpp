#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 10 || n > 99)
        cout << "N";
    else {
        cout << n % 10 << n / 10;
    }
}