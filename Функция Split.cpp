#include <bits/stdc++.h>
using namespace std;

vector<string> Split(const string& str, char delimiter) {
    size_t a = 0;
    string fond = "";
    vector <string> res;
    if (str.find(delimiter) == 0) res.push_back("");
    if (str.find(delimiter) != 0) res.push_back(str.substr(0,str.find(delimiter)));
    while (str.find(delimiter,a)!=string::npos) {
        if (str.find(delimiter,a+1)-str.find(delimiter,a) == 1) {
            res.push_back("");
            a+=1;
        }
        else if (str.find(delimiter,a+1)-str.find(delimiter,a) == 0) a+=1;
        else {
            res.push_back(str.substr(str.find(delimiter,a)+1,str.find(delimiter,a+1)-str.find(delimiter,a)-1));
            a+=1;
        }
    }
    if (str.find(delimiter,a) == str.length()-1) res.push_back("");
    return res;
}

int main() {
    string str;
    char delimiter;
    getline(cin, str);
    cin >> delimiter;
    vector<string> res = Split(str, delimiter);
    for (auto i : res) cout << i << endl;
}