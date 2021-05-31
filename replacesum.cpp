#include <bits/stdc++.h>

using namespace std;

vector <int> a;

int search(int x, vector <int> a) {
    int n = a.size();
    int l = 0, r = n - 1;
    if (a[0] >= x)
        return 0;
    if (x > a.back())
        return n;
    while (l < r) {
        cout << l << " " << r << endl;
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
    cin >> n;
    a.resize(n);
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
    // sort(a.begin(), a.end());
    cout << search(4, a);
}