#include <iostream>

struct S {
    void mem_fn() {
        std::cout << "Function called!" << std::endl;
    }
};

void f() {
    S* s = new S;  // Memory is allocated for the object
    s->mem_fn();   // Safe: Pointer is now valid
    delete s;      // Memory is freed
}

int main() {
    f();
    return 0;
}
