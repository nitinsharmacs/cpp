#include <iostream>

void get_print_full_name()
{
  std::cout << "Enter your full name > ";

  std::string fullname;

  std::getline(std::cin, fullname);

  std::cout << fullname << std::endl;
}

int main()
{

  int age{};
  int height{};

  std::cin >> age;
  std::cin >> height;
  std::cout << age;
  std::cout << height;

  return 0;
}