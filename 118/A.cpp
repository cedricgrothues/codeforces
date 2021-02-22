#include <algorithm>
#include <cctype>
#include <iostream>
#include <iterator>
#include <string>

const char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};

int main(int argc, const char **argv) {
  std::string in;
  std::cin >> in;

  for (char c : in) {
    c = (char)tolower(c);

    if (std::find(std::begin(vowels), std::end(vowels), c) != std::end(vowels))
      continue;

    std::cout << '.' << c;
  }

  std::cout << '\n';

  return 0;
}
