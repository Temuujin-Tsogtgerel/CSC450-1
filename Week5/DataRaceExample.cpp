#include <iostream>
#include <fstream>
#include <thread>

void writeToFile(const std::string& filename, const std::string& message) {
    std::ofstream file(filename, std::ios::app); // Open in append mode
    if (file.is_open()) {
        file << message << std::endl; // Write to file
    }
}

int main() {
    std::string filename = "output.txt";

    // Two threads writing to the same file
    std::thread t1(writeToFile, filename, "Thread 1 writing...");
    std::thread t2(writeToFile, filename, "Thread 2 writing...");

    t1.join();
    t2.join();

    std::cout << "Finished writing to file." << std::endl;
    return 0;
}
