#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    auto sumln = 0.0;
    for (int i=1;i<=n;i++) {
        sumln+=pow(-1,i+1)/i;
    }
    cout << sumln;
}