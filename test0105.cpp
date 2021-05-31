#include <iostream>

using namespace std;

int a[1009];

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    for (int i = 0; i < n; i++)
        if (a[i] > x)
            cout << a[i] << endl;
}