#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long n;
    long long s = 0, t = 0;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0) {
            s += (i + n / i);
            t += 2;
        }
    if (sqrt(n) == (int)sqrt(n)) {
        s -= (int) sqrt(n);
        t--;
    }
    cout << t << " " << s;
}