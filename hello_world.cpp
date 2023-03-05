#include <iostream>
#include <string>

int main() {
  std::string name; // создание переменно для xранения имени
  std::cout << "Hello! What's your name?"; // спрашиваем пол-ля имя
  getline(cin, name); // записываем имя из cin в name
  std::cout << "Hello, World from " << name; // выводим последнее сооб.
  return 0;
}
