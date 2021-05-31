#include <iostream>

using namespace std;

long long ucln(long long a, long long b) {
    if (b == 0)
        return a;
    return ucln(b, a % b);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << ucln (a, b);
}