#include <iostream>
#include <thread>

// Function to be executed by the thread
void threadFunction(int threadId) {
    std::cout << "Thread " << threadId << " started" << std::endl;
    // Simulate some work
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Thread " << threadId << " ended" << std::endl;
}

int main() {
    // Create threads
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);

    // Wait for threads to finish
    t1.join();
    t2.join();

    std::cout << "Main thread ended" << std::endl;

    return 0;
}
