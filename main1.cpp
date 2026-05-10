#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a=0, b=0, c=0, d=0;    
    if (s.length() >= 8 && s.length() <= 14) {
        for (auto x:s) {
            if (x >= 48 && x <= 57) a++;
            else if (x >= 65 && x <= 90) b++;
            else if (x >= 97 && x <= 122) c++;
            else if (x>=33 && x<=126) d++;
            else cout << "NO";
        }
        if (int F = (a > 0) + (b > 0) + (c > 0) + (d > 0) >= 3) 
            cout << "YES";
        else cout << "NO";
    } 
    else cout << "NO";
    system("pause");
}