#include <bits/stdc++.h>

using namespace std;

bool check(long long n) {
    return (long long) sqrt(n) == sqrt(n);
}

int main() {
    long long n;
    cin >> n;
    if (check(n))
        cout << "YES";
    else 
        cout << "NO";
}