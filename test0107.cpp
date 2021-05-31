#include <iostream>

using namespace std;

struct sach {
    string tenSach, tenTG;
    int namPH, gia, giaKM;
};

sach s[10009];

int main() {
    int n;
    string s1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin, s[i].tenSach);
        getline(cin, s[i].tenSach);
        getline(cin, s[i].tenTG);
        cin >> s[i].namPH;
        cin >> s[i].gia;
        if (s[i].gia >= 200000)
            s[i].giaKM = s[i].gia - 10000;
        else 
            s[i].giaKM = s[i].gia - 5000;
    }
    for (int  i = 0; i < n; i++) {
        cout << s[i].tenSach << endl << s[i].gia << endl << s[i].giaKM << endl;
    }
}