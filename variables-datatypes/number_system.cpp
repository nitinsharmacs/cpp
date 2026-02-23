#include <iostream>

int main()
{
  int decimal = 15;
  int hexadecimal = 0x0f;
  int octal = 017;
  int binary = 0b00001111;

  std::cout << "Decimal system : " << decimal << std::endl;
  std::cout << "Hexa decimal system : " << hexadecimal << std::endl;
  std::cout << "octal system : " << octal << std::endl;
  std::cout << "binary system : " << binary << std::endl;

  return 0;
}
