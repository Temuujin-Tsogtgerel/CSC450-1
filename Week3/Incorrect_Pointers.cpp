#include <iostream>

struct S {
    void mem_fn() {
        std::cout << "Function called!" << std::endl;
    }
};

void f() {
    S* s;  // Pointer declared but not initialized (points to random memory)
    s->mem_fn();  // This causes undefined behavior
}

int main() {
    f();
    return 0;
}
