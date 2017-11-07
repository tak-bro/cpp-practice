// Summary:
//
// 1. Namespace encapsulates members and member functions to address name collisions.
// 2. Namespace is loaded with the keyword "using"
// 3. "Using namespace XXX" introduce the whole namespace; "Using XXX::Y" introduces a specific name within the namespace.
//
// Test Output:
//    V::f()
//    U::f()

#include <iostream>

namespace U {
    void f() { std::cout << "U::f()" << std::endl; }
    void g() { std::cout << "U::g()" << std::endl; }
}

namespace V {
    void f() { std::cout << "V::f()" << std::endl; }
    void g() { std::cout << "V::g()" << std::endl; }
}

int main() {
    using namespace U;  // using directive
    using V::f;         // using declarion
    
    f();                // calls V::f()
    U::f();             // must fully qualify to call
    
    return 0;
}