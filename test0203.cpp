#include <iostream>

using namespace std;

int a[500008];
int d[1000009];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int L, R, l, r;
    L = R = l = r = 0;
    d[a[0]] = 1;
    int count = 1;
    while (l <= r && r < n - 1) {
        while (count <= k && r < n - 1) {
            r++;
            d[a[r]] ++;
            if (d[a[r]] == 1) {
                count ++;
            }
            if (r - l > R - L && count <= k) {
                L = l;
                R = r;
            }
        }
        while (count > k) {
            d[a[l]]--;
            if (d[a[l++]] == 0) {
                count--;
            }
            if (r - l > R - L && count <= k) {
                    L = l;
                    R = r;
            }
        }
    }
    cout << L + 1 << " " << R + 1;
}