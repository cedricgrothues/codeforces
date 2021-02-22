#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string in;
  std::cin >> in;

  int l = 0, u = 0;

  for (char c : in)
    isupper(c) ? u++ : l++;

  for (char c : in) {
    if (l >= u)
      std::cout << (char)tolower(c);
    else
      std::cout << (char)toupper(c);
  }

  return 0;
}
