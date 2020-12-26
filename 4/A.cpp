#include <iostream>

int main() {
  int a;
  std::cin >> a;

  if (a == 2) {
    std::cout << "NO\n";
    return 0;
  }

  std::cout << (a % 2 == 0 ? "YES" : "NO") << '\n';
}