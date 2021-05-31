#include <iostream>

using namespace std;

long long max(long long a, long long b, long long c) {
    long long m = a;
    if (m < b)
        m = b;
    if (m < c)
        m = c;
    return m;
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b, c);
}