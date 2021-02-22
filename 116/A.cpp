#include <iostream>

int main() {
  int n, a, b, p = 0, min = 0;
  std::cin >> n;

  while (n--) {
    std::cin >> a >> b;

    p = p - a + b;

    if (p > min)
      min = p;
  }

  std::cout << min;
}
