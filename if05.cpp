#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long t;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    if (a < c) {
        t = a;
        a = c;
        c = t;
    }
    if (b < c) {
        t = b;
        b = c;
        c = t;
    }
    cout << a << " " << b << " " << c;
}