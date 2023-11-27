#include <iostream>

class MyClass
{
public:
    // Static member function
    static void staticFunction()
    {
        std::cout << "This is a static function." << std::endl;
    }
};

int main()
{
    // Calling the static member function without creating an instance
    MyClass::staticFunction();

    return 0;
}
