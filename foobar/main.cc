#include <iostream>

#include "bar.h"
#include "foo.h"

int main(int argc, char** argv) {
  for (auto i = 0; i < argc; ++i)
    std::cout << "argv[" << i << "]: " << argv[i] << std::endl;

  auto x = foobar::Foo(3);
  auto y = foobar::Bar("Fred");
  std::cout << "x=" << x << ",y=" << y << std::endl;
}
