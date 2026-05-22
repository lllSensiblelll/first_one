    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        size_t m,n,k;
        cin >> m >> n >> k;
        vector<vector<int>> mat(m,vector<int>(n));
        int x,y;
        if (k>m*n) return 0;
        while(k--){
            cin >> x >> y;
            mat[x-1][y-1] = -1;
        }
        for (int i =0;i<m;i++) {
            for (int j = 0; j<n;j++) {
                if (mat[i][j] == -1) {
                    cout << "* ";
                    continue;
                }
                else {
                    int cnt = 0;
                    for (int a = -1;a<=1;a++) {
                        for (int b = -1;b<=1;b++) {
                            if (i+a>=0 && i+a<m && j+b>=0 && j+b<n) {
                                int aa = i+a,bb = j+b;
                                if (mat[aa][bb] == -1) cnt++;
                            }
                        }
                    }
                    mat[i][j] = cnt;
                    cout << cnt << " ";
                }
            }
            cout << "\n";
        }
    }