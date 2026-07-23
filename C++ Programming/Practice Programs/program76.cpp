#include <iostream>
using namespace std;

class base {
public:
    int i, j;

    int Add(int a, int b) {
        return a + b;
    }

    // Pure Virtual Function
    virtual int sub(int a, int b) = 0;
};

class Derived : public base {
public:
    int x, y;

    int mult(int a, int b) {
        return a * b;
    }

    // Implementing pure virtual function
    int sub(int a, int b) {
        return a - b;
    }
};

int main() {
    Derived d;

    cout << "Addition: " << d.Add(10, 5) << endl;
    cout << "Subtraction: " << d.sub(10, 5) << endl;
    cout << "Multiplication: " << d.mult(10, 5) << endl;

    return 0;
}
//PureVirtual.cpp