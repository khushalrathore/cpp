#include <chrono>
#include <iostream>
#include <thread>

void without_flush() {
  std::cout << "Starting the task..." << std::endl;
  for (int i = 0; i < 4; ++i) {
    std::cout << "Progress: " << (i + 1) * 25 << "%";
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  std::cout << std::endl << "Task completed!" << std::endl;
}

void with_flush() {
  std::cout << "Starting the task..." << std::endl;

  for (int i = 0; i < 10; ++i) {
    std::cout << "Progress: " << (i + 1) * 10 << "%" << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << '\r';
  }
  std::cout << std::endl << "Task completed!" << std::endl;
}

int main() {
  with_flush();
  without_flush();
  return 0;
}
