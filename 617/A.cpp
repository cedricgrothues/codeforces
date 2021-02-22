#include <cmath>
#include <iostream>

int main() {
  int x, p = 0, s = 0;
  std::cin >> x;

  while (p != x) {
    p += std::min(x - p, 5);
    s++;
  }

  std::cout << s;
}
