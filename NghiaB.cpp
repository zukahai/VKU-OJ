#include <bits/stdc++.h>

using namespace std;

vector <long long> a;

bool check(long long n, int I) {
    long long N = n;
    while (N > 10)
        N /= 10;
    cout << "N = " << N << endl;
    return (N * 10 + n % 10 == I);
}

int main() {
    long long n;
    // cin >> n;
    // for (int i = 10; i <= 99; i++) {
    //     long long h = i * i;
    //     while (h < 10000000000000000) {
    //         if (check(h, i))
    //             a.push_back(h);
    //         h *= i;
    //     }
    // }
    // sort(a.begin(), a.end());
    // for (int i = 0; i < a.size(); i++)
    //     if (a[i] >= n) {
    //         cout << a[i];
    //         // return 0;
    //     }
    // for (auto x : a)
    //     cout << x << " ";
    cout << check(100, 10);
}