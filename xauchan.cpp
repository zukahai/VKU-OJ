#include <bits/stdc++.h>

using namespace std;

vector <int> a(26, 0);

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        a[s[i] - 97]++;
    bool kt = true;
    for (int i = 0; i < 26; i++)
        if (a[i] % 2)
            kt = false;
    if (kt)
        cout << "Yes";
    else 
        cout << "No";
}