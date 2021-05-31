#include <iostream>

using namespace std;

int d[4];

int main() {
    string s;
    int count = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i += 2)
        d[s[i] - '0'] ++;
    int m = s.length() / 2;
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < d[i]; j++) {
            cout << i;
            if (m--)
                cout << "+";
        }
    }
}