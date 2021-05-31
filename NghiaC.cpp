#include <bits/stdc++.h>

using namespace std;

vector <int> a;
vector <bool> b(10000000, 1);
int doiXung(int n) {
    int ans = 0;
    while (n > 0) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}


int main() {
    b[0] = b[1] = false;
    for (int i = 2; i <= sqrt(10000000); i++)
        if (b[i])
            for (int j = 2 * i; j <= 10000000; j += i)
                b[j] = false;
    int n;
    cin >> n;
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    a.push_back(7);
    a.push_back(11);
    for (int k = 1; k <= 3; k++)
        for (int i = pow(10, k); i < pow(10, k + 1); i++) {
            a.push_back(i * pow (10, k) + doiXung(i / 10));
        }
    // cout << a.size();
    // for (auto x : a)
    //     cout << x << " ";
    int index = 0;
    for (index = 0; index < a.size(); index ++)
        if (a[index] >= n)
            break;
    // cout << a[index] << " -- " << endl;
    while (index < a.size()) {
        if (b[a[index]])
            break;
        index ++;
    }
    cout << a[index];
}