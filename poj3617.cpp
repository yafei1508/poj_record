//
// Created by lyf on 2018/7/4.
//
#include <iostream>
#include <cstdio>
#define MAX_N 2000
using namespace std;
int main() {
    int N;
    cin >> N;
    char S[MAX_N + 1];
    for(int i = 0;i<N;i++) {
        cin >> S[i];
    }
    int a = 0;
    int b = N -1;
    int x = 0;
    string str;
    while(a<=b) {
        int m = a;
        int n = b;
        //false 代表左边 true 代表右边
        bool flag = false;
        while(m <=n) {
            if(S[m] == S[n]) {
                m++;
                n--;
            } else if(S[m] < S[n]) {
                flag = false;
                break;
            } else {
                flag = true;
                break;
            }
        }
        if(flag) {
            str += S[b];
            b--;
        } else {
            str += S[a];
            a++;
        }
    }
    for(int i = 0;i<str.length();i++) {
        if(i % 80 == 0 && i != 0) {
            cout <<endl;
        }
        cout << str[i];
    }
    return 0;
}
