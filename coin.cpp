#include <iostream>

using namespace std;

long long d = 1000000007;
long long h[51][51];
int a[59];

void NcK() {
    for (int i = 0; i <= 50; i++)
        h[i][0] = h[i][i] = 1;
    for (int i = 2; i <= 50; i++)
        for (int j = 1; j < i; j++)
            h[i][j] = (h[i - 1][j] + h[i - 1][j - 1]) % d;
}

int cl[2];

int main() {
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cl[a[i] % 2]++;
    }
    int count  = 0;
    NcK();
    for (int i = 0; i <= cl[0]; i++)
        for (int j = p; j <= cl[1]; j += 2) {
            count = (count + h[cl[0]][i] * h[cl[1]][j]) % d;
        }
            
    cout << count;
}
