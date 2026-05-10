#include <bits/stdc++.h>
using namespace std;

int main() {
    size_t m,n,k;
    cin >> m >> n >> k;
    vector<vector<char>> mat(m,vector<char>(n));
    int i = 0;
    size_t x,y;
    while(k--){
        cin >> x >> y;
        mat[x-1][y-1] = '*';
        i++;
    }
    cout << i;
}