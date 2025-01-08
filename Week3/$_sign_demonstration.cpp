#include <iostream>

struct S {
    void mem_fn() {
        std::cout << "Function called!" << std::endl;
    }
};

void f() {
    S s_object;
    S* s_ptr = &s_object;
    s_ptr->mem_fn();
}

int main() {
    f();
    return 0;
}
