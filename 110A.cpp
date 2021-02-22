#include <iostream>
#include <string>

const int lns[] = {4,   7,   44,  47,  74,  77,  444,
                   447, 474, 477, 744, 747, 774, 777};

int main() {
  std::string in;
  std::cin >> in;

  int count = 0;

  for (char c : in) {
    if (c == '4' || c == '7')
      count++;
  }

  for (int l : lns) {
    if (count == l) {
      std::cout << "YES\n";

      return 0;
    }
  }

  std::cout << "NO\n";

  return 0;
}
