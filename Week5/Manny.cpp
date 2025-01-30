#include <iostream>
#include <thread>

int shared_resource = 10;

void increment() {
    shared_resource++;
    std::cout << "Resource value: " << shared_resource << std::endl;
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    return 0;
}