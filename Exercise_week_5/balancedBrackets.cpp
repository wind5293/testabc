#include <bits/stdc++.h>

#define N 10007
using namespace std;

string isBalanced(string s) {
	//test github tai day
    int stack[N] = {};
    int i = 0;
    
    for (char ch : s) {
        if (ch == '{') {
            stack[i] = 3;
            i++;
        }
        if (ch == '[') {
            stack[i] = 2;
            i++;
        }
        if (ch == '(') {
            stack[i] = 1;
            i++;
        }
        if (ch == ')') {
            if (i > 0 && stack[i - 1] == 1) {
                i--;
            } else {
                return "NO";
            }
        }
        if (ch == ']') {
            if (i > 0 && stack[i - 1] == 2) {
                i--;
            } else {
                return "NO";
            }
        }
        if (ch == '}') {
            if (i > 0 && stack[i - 1] == 3) {
                i--;
            } else {
                return "NO";
            }
        }
    }
    return (i == 0 ? "YES" : "NO");
}

int main() {
    int t = 2;
    while (t--) {
        string s; cin >> s;
        cout << isBalanced(s) << endl;
    }
}