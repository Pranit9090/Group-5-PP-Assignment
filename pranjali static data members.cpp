#include <iostream>
class MyClass 
{
public:
    // Static data member
    static int staticData;
    // Constructor
    MyClass(int value) : instanceData(value) 
    {
        // Increment static data member
        staticData++;
    }
    // Member function to access instance data
    int getInstanceData() 
    {
        return instanceData;
    }
    // Static member function to access static data
    static int getStaticData()
    {
        return staticData;
    }

private:
    int instanceData;
};

// Initializing static data member
int MyClass::staticData = 0;

int main() 
{
    // Creating instances of MyClass
    MyClass obj1(10);
    MyClass obj2(20);

    // Accessing instance data
    std::cout << "Instance data of obj1: " << obj1.getInstanceData() << std::endl;  // Output: 10
    std::cout << "Instance data of obj2: " << obj2.getInstanceData() << std::endl;  // Output: 20

    // Accessing static data member
    std::cout << "Static data: " << MyClass::getStaticData() << std::endl;  // Output: 2

    return 0;
}
