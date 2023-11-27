#include <iostream>

class MyClass {
private:
    int x;

public:
    MyClass() : x(0) {}

    friend void displayPrivate(MyClass obj);
};

// Definition of the friend function
void displayPrivate(MyClass obj) {
    // Accessing private member of MyClass
    std::cout << "Value of private member x: " << obj.x << std::endl;
}

int main() {
    MyClass obj;
    displayPrivate(obj); // Calling the friend function
    return 0;
}
