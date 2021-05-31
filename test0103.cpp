#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0) {
        cout << "N";
        return 0;
    }
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << k++ << " ";
        cout << endl;
    }
}