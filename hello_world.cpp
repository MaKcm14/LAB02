#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Hello! What's your name?";
  getline(cin, name);
  cout << "Hello, World from " << name;
  return 0;
}
