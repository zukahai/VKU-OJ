#include <iostream>

using namespace std;

string s;

int main() {
    bool kt = true;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ')
            kt = false;
    if (kt || s.length() > 100) {
        cout << "N";
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ')
            cout << endl;
        else 
            cout << s[i];
}