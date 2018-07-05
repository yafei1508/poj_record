//
// Created by lyf on 2018/7/4.
//
#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;
int R;
int n;
int X[MAX_N];
void solve() {
    int k = 0;
    int res = 0;
    while(k < n) {
        int temp = X[k] + R;
        int next = k;
        for(int i = k;i<n;i++) {
            if(X[i] > temp ) {
                if(i != k) {
                    next = i-1;
                }
                break;
            }
        }
        res ++;
        temp = X[next] + R;
        if(temp >= X[n-1]) {
            break;
        }
        for(int i = next;i<n;i++) {
            if(X[i] > temp) {
                k = i;
                break;
            }
        }

    }
    cout << res << endl;
}
int main () {
    while(cin >> R >> n) {
        if(R == -1 && n == -1) {
            break;
        }
        memset(X, 0, sizeof(X));
        for(int i = 0;i<n;i++) {
            cin >>X[i];
        }
        sort(X, X + n);
        solve();
    }
}