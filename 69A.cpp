#include <iostream>

int main() {
  int n, x = 0, y = 0, z = 0;
  int fx, fy, fz;

  std::cin >> n;

  while (n--) {
    std::cin >> fx >> fy >> fz;

    x += fx;
    y += fy;
    z += fz;
  }

  if (x == 0 && y == 0 && z == 0)
    std::cout << "YES\n";
  else
    std::cout << "NO\n";

  return 0;
}
