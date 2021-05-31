#include <bits/stdc++.h>

using namespace std;

vector <long long> a;

int search(long long x, vector <long long> a) {
    int n = a.size();
    int l = 0, r = n - 1;
    if (a[0] >= x)
        return 0;
    if (x > a.back())
        return n;
    while (l < r) {
        // cout << l << " " << r << endl;
        int mid = (l + r) / 2;
        if (a[mid] >= x)
            r = mid;
        else 
            l = mid + 1;
    }
    return l;
}

int main() {
    int n;
    // cin >> n;
    n = 100000;
    a.resize(n);
    for (int i = 0; i < a.size(); i++)
        a[i] = 1;
    sort(a.begin(), a.end());
    long long time = 0;
    while (a.size() > 2) {
        if (a.size() % 1000 == 0)
        cout << a.size() << endl;
        // for (auto x : a)
        //     cout << x << " ";
        // cout << endl;
        long long k = a[0] + a[1];
        time += k;
        a.erase(a.begin());
        a.erase(a.begin());
        a.insert(a.begin() + search(k, a), k);
    }
    cout << a[0] + a[1] << " " << time + a[0] + a[1];
}