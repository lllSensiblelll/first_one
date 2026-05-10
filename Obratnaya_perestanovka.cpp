#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main () {
    vector <size_t> l;
    size_t n,a;
    string s;
    cin >> n >>ws;
    getline (cin,s);
    stringstream ss(s);
    while (ss>>a) {
        l.push_back(a);
    }
    vector <size_t> l1(l);
    for (size_t i = 0;i<l.size();i++) {
        l1[i] = find(l.begin(), l.end(), i+1) - l.begin() + 1;
    }
    for (size_t b:l1) {
        cout << b << " ";
    }
}