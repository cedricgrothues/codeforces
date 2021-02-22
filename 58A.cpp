#include <iostream>
#include <string>

const char *hello = "hello";

int main() {
  std::string in;
  std::cin >> in;

  int n = 0;

  for (char c : in) {
    if (c == hello[n])
      n++;
  }

  if (n > 4)
    std::cout << "YES\n";
  else
    std::cout << "NO\n";

  return 0;
}
