#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    stack<int> s1, s2;
    
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int choose; cin >> choose;
        
        int value;
        if (choose == 1) {
            cin >> value;
            s1.push(value);
        } else if (choose == 2) {
            if (!s2.empty()) {
                s2.pop();
            } else {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
                s2.pop();
            }
        } else if (choose == 3) {
            if(!s2.empty()){
                cout << s2.top() << endl ;
            } else {
                while (!s1.empty()) {
                    s2.push(s1.top()) ;
                    s1.pop() ;
                }
                cout << s2.top() << endl ;
            }
        }
    }
    return 0;
}
