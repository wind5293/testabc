#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string mainStr = "abcde";
    int q; cin >> q;

    vector<string> str_arr;
    
    for (int i = 1; i <= q; i++) {
        string s; cin >> s;
        if (s[0] != 4) {
            int choose = s[0] - 48;
            switch (choose)
            {
            case 1:
                string add = s.substr(2, s.size() - 1);
                mainStr += add;
                break;
            case 2:
                string index = stoi(s[2]);
                mainStr.erase(index - 1);
                break;
            case 3:
                int index = stoi(s[2]);
                if (index >= mainStr.size()) {
                    cout << "Out of size!" << endl;
                } else {
                    cout << mainStr[index] << endl;
                }
                break;
            default:
                break;
            }
        }
    }
    return 0;
}