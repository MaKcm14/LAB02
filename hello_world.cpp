#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "Hello! What's your name?";
  getline(cin, name);
  std::cout << "Hello, World from " << name;
  return 0;
}
