#include <bits/stdc++.h>

using namespace std;

int solve(string s) {
    // cout << (s[1] == s[3]) << endl;
    int max = 1;
    for (int i = 1; i < s.length() - 1; i++) {
        // cout << s << endl;
        // cout << s[i] << endl;
        int leng = 1;
        int l = i - 1;
        int r = i + 1;
        // cout << l << " ---- " << r << " --- " << s[1] << " " << s[3] << endl;
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            // cout << "c" << endl;
            leng += 2;
            if (leng > max)
                max = leng;
            l--;
            r++;
            // cout << l << "   -1-  " << r << endl;
        }
        if (s[i] == s[i + 1]) {
            int leng = 2;
            int l = i - 1;
            int r = i + 2;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                leng += 2;
                if (leng > max)
                    max = leng;
                l--;
                r++;
                // cout << l << "   -2-  " << r << endl;
            }
        }
    }
    return max;
}

int main(){
    string s;
    getline(cin, s);
    cout << solve(s);
}