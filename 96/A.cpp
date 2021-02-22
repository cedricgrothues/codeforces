#include <iostream>
#include <string>

int main(int argc, const char **argv) {
  std::string in;
  std::cin >> in;

  short con = 1;
  char prev;

  for (char c : in) {
    if (!prev) {
      prev = c;
      continue;
    }

    if (c == prev)
      con++;
    else
      con = 1;

    if (con >= 7) {
      std::cout << "YES\n";
      return 0;
    }

    prev = c;
  }

  std::cout << "NO\n";
}
