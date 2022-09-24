#include <iostream>
using namespace std;

struct STACK {
    int data[1000];
    int length;
};

void init(STACK &s) {
    s.length = 0; 
}

bool isEmpty(STACK &s) {
    return s.length == 0;
}

void push(STACK &s, int k) {
    if (s.length < 1000) {
        s.data[s.length] = k;
        s.length ++;
    } else {
        cout << "Stack is full" << endl;
    }
}

int pop(STACK &s) {
    // return 0 if stack is empty
    if (s.length > 0) {
        int e = s.data[s.length - 1];
        s.length --;
        return e;
    } else {
        cout << "Stack is empty" << endl;
        return 0;
    }
}

void print(STACK &s) {
    while (s.length > 0) {
        cout << pop(s);
    }
    cout << endl;
}

void toBinary(int d) {
    STACK s;
    int d1 = d;
    init(s);
    while (d > 0) {
        push(s, d % 2);
        d = d / 2;
    }
    cout << d1 << " in binary: ";
    print(s);
}

int main() {
    // STACK s;
    // init(s);
    // cout << "Stack is empty: " << isEmpty(s) << endl;
    // push(s, 1);
    // push(s, 3);
    // cout << "Stack length: " << s.length << endl;
    // cout << "Pop: " << pop(s) << endl;
    // cout << "Stack length: " << s.length << endl;
    // cout << "Pop: " << pop(s) << endl;
    // cout << "Stack length: " << s.length << endl;
    // cout << "Pop: " << pop(s) << endl;
    // cout << "Stack length: " << s.length << endl;
    // print(s);
    toBinary(23);
    return 0;
}