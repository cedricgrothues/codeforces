#include <cmath>
#include <iostream>

int main(int argc, const char **argv) {
  long long n, m, a;

  std::cin >> n >> m >> a;
  std::cout << ((m + a - 1) / a) * ((n + a - 1) / a);

  return 0;
}
