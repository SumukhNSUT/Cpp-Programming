// static data
class MyClass
{
public:
    static int staticData;
};
int MyClass::staticData = 42; // Initialization of the static member
// Static Data Members: These are shared by all objects of the class.
// Only one copy exists for the entire class, and it's not tied to any specific object.
// In this example, staticData is a static data member of MyClass, and it's initialized to 42.
// All instances of MyClass will share this same value.

// static functions
class MyClass
{
public:
    static void staticFunction()
    {
        // This is a static member function
        std::cout << "Hello from staticFunction()!" << std::endl;
    }
};
MyClass::staticFunction();
// Call to a static member function
// These are functions that do not operate on any specific
//  object of the class.
//  They can be called using the class name and the scope resolution operator ::
// Here, staticFunction() is a static member function of MyClass.
// It does not operate on any specific instance of MyClass.
// it can be called without creating any objects of MyClass.

/*Usage:
Static Data Members: Used when you need a property that is common to all instances of a class, or when you want to maintain a shared state across all instances. Examples include constants, counters, or shared resources.

Static Member Functions: Used when a function does not need access to instance-specific data (non-static members). They can be useful for utility functions or for managing static data members.*/

// :: ---> scope resolution operator