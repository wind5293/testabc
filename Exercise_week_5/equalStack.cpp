#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < h1.size(); i++) {
        sum1 += h1[i];
    }
    for (int i = 0; i < h2.size(); i++) {
        sum2 += h2[i];
    }
    for (int i = 0; i < h3.size(); i++) {
        sum3 += h3[i];
    }
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < h1.size() && j < h2.size() && k < h3.size()) {
        if (sum1 == sum2 && sum2 == sum3) {
            return sum1;
        }
        else if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= h1[i];
            i++;
        }
        else if (sum2 >= sum3 && sum2 >= sum1) {
            sum2 -= h2[j];
            j++;
        }
        else if (sum3 >= sum1 && sum3 >= sum2) {
            sum3 -= h3[k];
            k++;
        }
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> h1 = {3, 2, 1, 1, 1}; 
    vector<int> h2 = {4, 3, 2}; 
    vector<int> h3 = {1, 1, 4, 1};

    cout << equalStacks(h1, h2, h3) << endl;
    return 0;
}