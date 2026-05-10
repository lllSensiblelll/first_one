#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s,beg;
    cin >> beg;
    if (beg.empty()) {
        cout << "0000" << endl;
        return 0;
    }
    else if (beg.length()>20) return 0;
    string bch = "aeiouyhw";
    char one = beg[0];
    for (size_t i=1; i<beg.length(); i++) {
        if (bch.find(beg[i]) == string::npos) s += beg[i];
    }
    s=one+s;
    for (size_t i=1; i<s.length(); i++) {
        if (s[i] == 'b' || s[i] == 'f' || s[i] == 'p' || s[i] == 'v') s[i] = '1';
        else if (s[i] == 'c' || s[i] == 'g' || s[i] == 'j' || s[i] == 'q' || s[i] == 'k' || s[i] == 's' || s[i] == 'x'||s[i] == 'z') s[i] = '2';
        else if (s[i] == 'd' || s[i] == 't') s[i] = '3';
        else if (s[i] == 'l') s[i] = '4';
        else if (s[i] == 'm' || s[i] == 'n') s[i] = '5';
        else if (s[i] == 'r') s[i] = '6';
    }
    size_t a = 0;
        while (a+1 < s.length()) {
            if (s[a] == s[a+1]) s.erase(a+1, 1);
            else a++;    
    }
    if (s.length()<4) s.append(4-s.length(),'0'); 
    else if (s.length()>4) s = s.substr(0,4);
    cout << s;
}