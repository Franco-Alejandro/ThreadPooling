
#include <iostream>
#include "ThreadPool.h"


int main() {
    ThreadPool pool(4);  // create a thread pool with 4 worker threads
    for (int i = 0; i < 100; i++) {
        pool.enqueue([i] {
            std::cout << "Task " << i << " executed in thread " << std::this_thread::get_id() << std::endl;
            });
    }
    return 0;
}
