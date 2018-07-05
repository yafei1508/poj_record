//
// Created by lyf on 2018/6/29.
//
#include <iostream>

using namespace std;
int M;
int N;

char **x;
int result = 0;
void dfs(int m, int n) {
    if(x[m][n] == 'W') {
        x[m][n] = '.';
    } else{
        return;
    }
    for(int i = -1;i <= 1;i++) {
        for(int j = -1;j<=1;j++) {
            if(m+i < M && m+i >=0 && n+j <N&&n+j >=0) {
                dfs(m+i, n+j);
            }
        }
    }
    return;
}
int main() {
    cin >> M >> N;
    x = new char *[M];
    for (int i = 0; i < M; i++) {
        x[i] = new char[N];
    }
    for(int i = 0;i<M;i++) {
        for(int j = 0;j<N;j++) {
            cin>>x[i][j];
        }
    }
    for(int i = 0;i<M;i++) {
        for(int j = 0;j<N;j++) {
            if(x[i][j] == 'W'){
                dfs(i,j);
                result++;
            }
        }
    }
    cout << result << endl;
}
