#include <bits/stdc++.h>

using namespace std;

class Stack {
private:
    vector<int> arr;
    int count;
public:
    Stack() {
        arr = {};
        count = 0;
    }

    void enqueue(int value) {
        arr.push_back(value);
        count++;
    }

    int dequeue() {
        auto it = arr.end();
        int top = *it;
        arr.pop_back();
        return top;
    }

    void printValue() {
        for (int i : arr) {
            cout << i << " ";
        }
    }
};

int main() {
    Stack stk;
    stk.enqueue(3);
    stk.enqueue(6);
    stk.printValue();

    stk.dequeue();
    stk.printValue();

    return 0;
}