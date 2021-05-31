#include <iostream>

using namespace std;

long long min(long long a, long long b, long long c, long long d) {
    long long m = a;
    if (m > b)
        m = b;
    if (m > c)
        m = c;
    if (m > d)
        m = d;
    return m;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a, b, c, d);
}