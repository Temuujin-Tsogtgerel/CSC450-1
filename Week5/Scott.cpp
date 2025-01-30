#include <iostream>
#include <thread>
static bool s_Finished = false;

void doWork()
{
    using namespace std::chrono_literals;
    while (!s_Finished) {
        std::cout << "working..\n";
        std::this_thread::sleep_for(1s);
    }
}

int main() {
    std::thread worker(doWork);
    std::cin.get();
    s_Finished = true;

    worker.join();
    std::cin.get();
}
