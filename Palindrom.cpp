#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <char> l;
    string s;
    getline (cin,s);
    for (char a:s) {
        if (a != ' ') l.push_back(a);
    }
    if (l.empty() || l.size() == 1) {
        cout << "YES" << endl;
        return 0;
    }
    size_t b = 0;
    for (size_t i = 0;i<l.size()/2;i++) {
        if (l[i] == l[l.size()-i-1]) {
            b++;
            if (b==l.size()/2) {
                cout << "YES" << endl;
                break;
            }
        }
        else {
            cout << "NO" << endl;
            break;
        }
    }
    return 0;
}