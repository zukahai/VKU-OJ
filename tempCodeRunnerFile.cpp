#include <bits/stdc++.h>

using namespace std;

int a[500005][2];
int h[100009];
int d[500005];
vector <bool> b;

void loang(int i) {
    queue <int> st;
    st.push(i);
    while(!st.empty()) {
        int k = st.front();
        for (int j = h[k]; j <= h[k + 1] - 1; j++) {
            if (b[d[j]]) {
                st.push(d[j]);
                b[d[j]] = false;
            }
        }
        st.pop();
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    b.resize(n + 2, true);
    for (int i = 0; i < m; i++)
        cin >> a[i][0] >> a[i][1];
    h[0] = 0;
    for (int i = 0; i < m; i++)
        h[a[i][0]]++;
    for (int i = 1; i <= n; i++)
        h[i] = h[i - 1] + h[i];
    h[n + 1] = m;
    for (int i = 0; i < m; i++)
        d[--h[a[i][0]]] = a[i][1];
    int result = 0;
    for (int i = 1; i <= n; i++)
        if (b[i]) {
            result++;
            b[i] = false;
            loang(i);
        }
    cout << result;     
}