#include <bits/stdc++.h>

using namespace std;

int a[1009];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int c, d, e;
    int max = 2;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++) {
            c = a[i];
            d = a[j];
            int leng = 2;
            for (int k = j + 1; k < n; k++)
                if (a[k] == c + d) {
                    c = d;
                    d = a[k];
                    leng++;
                }
            if (leng > max)
                max = leng;
        }
    cout << n - max;
}