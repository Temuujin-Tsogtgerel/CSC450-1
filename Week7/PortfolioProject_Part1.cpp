#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool firstThreadDone = false;

void countUp() {
    for (int i = 0; i <= 20; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Counting Up: " << i << std::endl;
    }
    {
        std::lock_guard<std::mutex> lock(mtx);
        firstThreadDone = true;
    }
    cv.notify_one(); // Notify the second thread
}

void countDown() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return firstThreadDone; }); // Wait until countUp() completes

    for (int i = 20; i >= 0; --i) {
        std::cout << "Counting Down: " << i << std::endl;
    }
}

int main() {
    std::thread t1(countUp);
    std::thread t2(countDown);

    t1.join();
    t2.join();

    return 0;
}
